//  Youssef Aglan 900222720
//  Template Queue.cpp
//  Assignment 3
//


#include "TemplateQueue.hpp"
template <class X>
void Queue<X>::enqueue(X element){
    if (count >= 5){
        cout << "Queue is full..." << endl;
    }
    else{
        tail = (tail + 1 ) % 5;
        array[tail] = element;
        count++;
        //cout << "Element added successfully" << endl;
    }
}
template <class X>
X Queue<X>::dequeue(){
    if (count <= 0){
        cout << "Queue is already empty..." << endl;
        exit(1);
    }
    else{
        X temp;
        temp = array[head];
        head = (head + 1 ) % 5;
        count--;
        return temp;
    }
}
template <class X>
int Queue<X>::getCount(){
    return count;
}
