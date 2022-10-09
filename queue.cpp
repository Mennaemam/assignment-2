#include "queue.h"
template <class x>
class queue{
public:
    int front;
    int rear;
    int index;
    x ind[10];
    queue()
    {
        x ind[10];
        front=-1;
        rear=0;
        index=0;
    }
    void push(x obj)
    {
    ind[rear]=obj;
        index++;
    }
    x pop()
    {
        x obj=ind[front];
        ind[front]=0;
        if(front<10)
        {
            front++;
        }
        return obj;
        
    }
   x frontt()
    {
        if(front==-1)
        {
            std::cout<<"queue is empty"<<std::endl;
        }
        else
        {
            return ind[front];
        }
    }
    bool IsEmpty()
    {
        if (index)
        {return false;}
        else        {    return true;}
    }

    ~queue()
    {
        delete [] ind;
    }
};
