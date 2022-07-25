#include <iostream>
using namespace std;

class Cpu
{
public:
    virtual void caculate() = 0;
};

class VideoCard
{
public:
    virtual void display() = 0;
};

class Memory
{
public:
    virtual void storage() = 0;
};

class InterCpu: public Cpu
{
public:
    void caculate()
    {
        cout << "Inter Cpu计算" << endl;
    }
};

class InterVideoCard: public VideoCard
{
public:
    void display()
    {
        cout << "Inter videocard显示" << endl;
    }
};

class InterMemory: public Memory
{
public:
    void storage()
    {
        cout << "Inter memory存储" << endl;
    }
};

class LenovoCpu: public Cpu
{
public:
    void caculate()
    {
        cout << "Lenovo Cpu计算" << endl;
    }
};

class LenovoVideoCard: public VideoCard
{
public:
    void display()
    {
        cout << "Lenovo videocard显示" << endl;
    }
};

class LenovoMemory: public Memory
{
public:
    void storage()
    {
        cout << "Lenovo memory存储" << endl;
    }
};

class Computer
{
public:
    Computer(Cpu *cpu, VideoCard *videocard, Memory *memory)
    {
        m_cpu = cpu;
        m_videocard = videocard;
        m_memory = memory;
    }
    void assembly()
    {
        m_cpu->caculate();
        m_videocard->display();
        m_memory->storage();
    }
    ~Computer()
    {
        cout << "Computer析构函数调用" << endl;
        if (m_cpu!=NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_videocard!=NULL)
        {
            delete m_videocard;
            m_videocard = NULL;
        }
        if (m_memory!=NULL)
        {
            delete m_memory;
            m_memory = NULL;
        }
    }
private:
    Cpu *m_cpu;
    VideoCard *m_videocard;
    Memory *m_memory;
};

void test01()
{
    Computer com1(new InterCpu, new InterVideoCard, new InterMemory);
    com1.assembly();
    Computer com2(new LenovoCpu, new InterVideoCard, new InterMemory);
    com2.assembly();
}

int main()
{
    test01();
}