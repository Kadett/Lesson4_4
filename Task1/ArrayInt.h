#pragma once
#include <iostream>
#include <cassert>
#include <algorithm>

class ArrayInt {
    int m_length;
    int *m_data;
public:
    ArrayInt();
    ArrayInt(int length);
    ~ArrayInt();

    void erase();
    int getLength();
    int& operator[](int index);

    void resize(int newLength);

    void insertBefore(int value, int index);
    void push_back(int value);
    void pop_back();
    void pop_front();
    void sort();
    void print();
};



