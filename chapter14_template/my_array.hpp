// 自己的通用数组类
#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class Myarray
{
public:
    Myarray(int capacity)
    {
        // cout << "Myarray的有参构造" << endl;
        m_capacity = capacity;
        m_size = 0;
        p_address = new T[m_capacity];
    }

    //拷贝构造
    Myarray(const Myarray & arr)
    {
        // cout << "Myarray的拷贝构造" << endl;
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        // 深拷贝
        p_address = new T[arr.m_capacity];
        // 将arr中的数据都拷贝过来
        for (int i=0; i<m_size; i++)
        {
            p_address[i] = arr.p_address[i];
        }
    }

    // 重载=防止浅拷贝问题
    Myarray & operator=(const Myarray &arr)
    {
        // cout << "Myarray的operator=重载" << endl;
        // 先判断原来堆区是否有数据，如果有先释放
        if (p_address!=NULL)
        {
            delete [] p_address;
            p_address = NULL;
            m_size = 0;
            m_capacity = 0;
        }
        // 深拷贝
        m_capacity = arr.m_capacity;
        m_size = arr.m_size;
        p_address = new T[arr.m_capacity];
        for (int i=0; i<m_size; i++)
        {
            p_address[i] = arr.p_address[i];
        }
        return *this;
    }

    // 尾插法
    void push_back(const T & val)
    {
        // 判断容量是否等于大小
        if (m_capacity==m_size)
        {
            cout << "数组已满，无法插入" << endl;
            return;
        }
        p_address[m_size] = val;
        m_size++;
    }

    // 尾删除
    void pop_back()
    {
        // 让用户访问不到尾部的数据
        if (m_size==0)
        {
            cout << "数组为空，无法删除" << endl;
        }
        m_size--;
    }

    // 通过下标访问数组元素, arr[0] = 100;如果想让返回作为左值，需要返回引用
    T& operator[](int index)
    {
        return p_address[index];
    }

    // 返回数组容量
    int get_capacity()
    {
        return m_capacity;
    }

    // 返回数组大小
    int get_size()
    {
        return m_size;
    }

    ~Myarray()
    {
        if (p_address!=NULL)
        {
            // cout << "Myarray的析构" << endl;
            delete [] p_address;
            p_address = NULL;
        }
    }

private:
    int m_capacity; // 数组容量
    int m_size;   // 数组元素个数
    T * p_address;  // 指针指向堆开辟的真实数组
};