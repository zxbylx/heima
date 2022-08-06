#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <ctime>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

// 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在哪个部门工作
// 员工信息有：姓名 工资组成； 部门分为：策划、美术、研发
// 随机给10名员工分配部门和工资
// 通过multimap进行信息的插入 key（部门编号）value（员工）
// 分部门显示员工信息

class Worker
{
public:
    string m_name;
    int m_salary;
};

void create_worker(vector<Worker> &v)
{
    string nameSeed = "ABCDEFGHIJ";
    for (int i=0; i<10; i++)
    {
        Worker worker;
        worker.m_name = "员工";
        worker.m_name += nameSeed[i];

        worker.m_salary = rand() % 10000 + 10000;  // 10000~19999
        v.push_back(worker);
    }
}

void set_group(vector<Worker> &v, multimap<int, Worker> &m)
{
    for(vector<Worker>::iterator it=v.begin(); it!=v.end(); it++)
    {
        // 产生随机部门编号
        int deptId = rand() % 3; // 0-2
        m.insert(make_pair(deptId, *it));
    }
}

void show_worker_by_group(multimap<int, Worker> &m, int part_id)
{
    cout << "策划部门：" << endl;
    multimap<int, Worker>::iterator pos =m.find(part_id);
    int count = m.count(part_id);
    int index = 0;
    // 这里pos++就直接寻找下一个位置
    for(; pos!=m.end() && index < count; pos++, index++)
    {
        cout << "姓名：" << pos->second.m_name << "工资： " << pos->second.m_salary << endl;
    }
}

int main()
{
    srand((unsigned int) time(NULL));  // 随机种子
    vector<Worker> v_worker;
    create_worker(v_worker);
    // 员工分组
    multimap<int, Worker> m_worker;
    set_group(v_worker, m_worker);
    for(vector<Worker>::iterator it=v_worker.begin(); it!=v_worker.end(); it++)
    {
        cout << "姓名：" << it->m_name << " 工资：" << it->m_salary << endl;
    }
    cout << endl;

    // 分组显示员工
    show_worker_by_group(m_worker, CEHUA);
    show_worker_by_group(m_worker, MEISHU);
    show_worker_by_group(m_worker, YANFA);

}