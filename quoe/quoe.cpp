// quoe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
using namespace std;


template <typename V>
class ArrayQueue {
    int _f;
    int _r;
    int _Capacity;
    V* _Array;
    int _n;
public:
    AryrayQueue(int capacity) {
        _Array = new V[capacity];
        _Capacity = capacity;
        _f = 0;
        _r =0 ;
        _n = 0;

    }
    bool empty() {
        return _n == 0;
    }
    int size() {
        return _n;
    }

    void enqueue(const V& v) {
        if (size() == _Capacity) {
            throw runtime_error("Queue is full")
        }
        _Array[_r] = v;
        _r = (_r + 1) % _Capacity;
        _n++;
    }
    void dequeue() {
        if (empty() ) {
            throw runtime_error("Queue is empty")
        }
        _f= (_f + 1) % _Capacity;
        _n--;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}

