#include <iostream>
template <class q>
class Queue
{
private:
    q* ind[10];
    int index;
    q front=ind[0];
    q rear=ind[-1];
public:
    void push(q obj);
    q pop();
    ~Queue();
};
