//
// Created by DhawalP on 10/08/23.
//

#ifndef VECTORS_VECTORS_H
#define VECTORS_VECTORS_H
#include <iostream>
#endif //VECTORS_VECTORS_H
class Vector{
    int cap;
    int nextIn;
    int *data;
public:
    Vector()
    {
        data= new int [5];
        cap=5;
        nextIn=0;
    }
    Vector(Vector const &a)
    {
        this->data=new int[a.cap];
        for(int i=0;i<a.nextIn;i++)
        {
            this->data[i]=a.data[i];
        }
        this->cap=a.cap;
        this->nextIn=a.nextIn;
    }
    Vector operator=(Vector const &a)
    {
        this->data=new int[a.cap];
        for(int i=0;i<a.nextIn;i++)
        {
            this->data[i]=a.data[i];
        }
        this->cap=a.cap;
        this->nextIn=a.nextIn;
        return *this;
    }
    void push(int const &elem)
    {
        if(nextIn==cap)
        {
            int *newData= new int [2*cap];
            for(int i= 0 ;i<cap;i++)
            {
                newData[i]=data[i];
            }
            delete []data;
            data=newData;
            cap*=2;
        }
        data[nextIn]=elem;
        nextIn++;
    }
    int at(int const &index) const
    {
        if(index<cap)
            return data[index];
        else
            std::cout<<"\nIndex out of scope\n";
        return 0;
    }

    void push(int index,int elem)
    {
        if(index>nextIn)
        {
            std::cout<<"\nIndex out of scope\n";
            return;
        }
        else if(index<nextIn)
        {
            data[index]=elem;
            return;
        }
        else if(index==nextIn)
        {
            push(elem);
        }
    }

    void display() const
    {
        std::cout<<"\n";
        std::cout<<"[";
        for(int i=0;i<nextIn;i++)
        {
            std::cout<<data[i]<<" ";
        }
        std::cout<<"]";
        std::cout<<"\n";
    }

    int size() const
    {
        return cap;
    }
    void diff() const
    {
        std::cout<<"\n";
        std::cout<<"Size : "<<cap<<" NextIndex : "<<nextIn;
        std::cout<<"\n";
    }
};