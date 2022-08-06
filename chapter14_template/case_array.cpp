#include <iostream>
#include <string>
#include "my_array.hpp"
using namespace std;

void printIntArray(Myarray <int>&arr)
{
    for (int i=0; i<arr.get_size(); i++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{
    Myarray<int> arr1(5);
    for (int i=0; i<5; i++)
    {
        arr1.push_back(i);
    }
    cout << "arr1的打印输出为： " << endl;
    printIntArray(arr1);
    cout << "arr1的容量为多少： " << arr1.get_capacity() << endl;
    cout << "arr1的大小为为多少： " << arr1.get_size() << endl;

    Myarray<int> arr2(arr1);
    cout << "arr2的打印输出为： " << endl;
    printIntArray(arr2);
    arr2.pop_back();
    cout << "arr2的打印输出为： " << endl;
    printIntArray(arr2);
    cout << "arr2的容量为多少： " << arr2.get_capacity() << endl;
    cout << "arr2的大小为为多少： " << arr2.get_size() << endl;
    // Myarray<int> arr3(10);
    // arr3 = arr1;
}

// 测试自定义数据类型
class Person
{
public:
    Person(){};
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

void printPersonArray(Myarray<Person> &arr)
{
    for (int i=0; i<arr.get_size(); i++)
    {
        cout << "姓名：" << arr[i].m_name << " 年龄：" << arr[i].m_age << endl;
    }
}

void test02()
{
    Myarray<Person> arr(10);
    Person p1("孙悟空", 99);
    Person p2("zhao", 9);
    Person p3("xin", 29);
    Person p4("bo", 39);
    Person p5("hello", 49);
    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    arr.push_back(p5);
    printPersonArray(arr);
    // 输出容量和大小
    cout << "容量和大小:" << endl;
    cout << arr.get_capacity() << endl;;
    cout << arr.get_size() << endl;
}

int main()
{
    test02();
}