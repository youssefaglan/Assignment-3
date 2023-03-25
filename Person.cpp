// Youssef Aglan 900222720
//  Person.cpp
//  Assignment 3
//

#include "Person.hpp"
Person::Person(){

    Name = "";

    ID = -1;

    Age = 20;
}
void Person::setName(string N){

    Name = N;
}
void Person::setID(int I){

    ID = I;
}
void Person::setAge(int A){

    Age = A;
}
string Person::getName(){

    return Name;
}
int Person::getID(){

    return ID;
}
int Person::getAge(){

    return Age;
}
void Person::printInfo(){

    cout << "The Person's name is: " << Name << endl;

    cout << "The Person's ID is: " << ID << endl;

    cout << "The Person's age is: " << Age << endl;
}
