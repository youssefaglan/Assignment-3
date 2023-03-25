// Youssef Aglan 900222720
//  Customer.hpp
//  Assignment 3
//

#include "Person.hpp"
#include <iostream>
#include <string>

using namespace std;

#ifndef Customer_hpp
#define Customer_hpp

class Customer: public Person{
private:

    int MechanicID ;//is -1 if not assigned
    Appointment app;

public:

    Customer();

    Customer(int h, int m, string, int); //constructor which makes entering the name and age of the customer in the main easier

    void setMechanicID(int); //setter which assigns a mechanich to the given customer

    int getMechanicID(); //getter for the mechanic's ID

    bool operator<(const Customer &p); //overload logical operators for comparision

    bool operator>(const Customer &p);

    bool operator==(const Customer &p);

    void setAppointment(int h, int m); // the hours and minutes the customer wants are passed here

    void getAppointment(int &h, int &m); //gets the hour and minutes that the customer want

    void print(); // provides implementation for the pure virtual function
};


#endif /* Customer_hpp */
