//  Youssef Aglan 900222720
//  Template Queue.hpp
//  Assignment 3
//

#include <iostream>
#include "Mechanic.hpp"
#include "Customer.hpp"

using namespace std;

#ifndef Template_Queue_hpp
#define Template_Queue_hpp

template <class X>
class Queue{
private:

    int head;

    int tail;

    int count;

    X array[5]; // it's assumed that there are a maximum of 5 customer and Mechanics
public:

    Queue(){head = 0; //implemnted a circular queue

        tail = -1;

        count = 0;};

    void enqueue(X element);

    X dequeue();

    int getCount();
};

#endif /* Template_Queue_hpp */
