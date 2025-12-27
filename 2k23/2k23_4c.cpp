// Array container class with bound-checking and dynamic resizing capability

#include <bits/stdc++.h>
using namespace std;

class Array
{
    int *data;
    int size;     // current size
    int capacity; // max size
public:
    Array(int cap = 1)
    {
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }
    ~Array()
    {
        delete[] data;
    }
    void push_back(int x)//
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *temp = new int[capacity];//alloc new memory
            for (int i = 0; i < size; i++)//copy data
            {
                temp[i] = data[i];
            }
            delete[] data; //free data
            data = temp; //point to new mem
        }
        data[size++] = x; //insert elements
    }
    int at(int index)//bound checking
    {
        if (0 > index || index >= size)
        {
            cout << "Out of bounds !" << endl;
            return -1;
        }
        else
        {
            return data[index];
        }
    }
};
int main()
{
    Array a;
    a.push_back(1);
    a.push_back(2);
    cout << a.at(1);
    return 0;
}