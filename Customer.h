#ifndef CUSTOMER_H
#define CUSTOMER_H


#include "Person.h"
#include "PhoneNumber.h"
#include "UnsortedType.cpp"
#include <iostream>

#pragma once

using namespace std;

class Customer : public Person
{
private:
    UnsortedType<PhoneNumber> phone;
public:
    Customer(string nid,string phone,string oparator);
    int get_phone_size();
    void get_phone_numbers();
    void get_operators();
    void insert_phone_oparator(string phone,string oparator);
    bool change_operator(string phoneNumber,string newOparator);
    void print_customer_info();
    int delete_phone(string phoneNumber);
};



#endif // CUSTOMER_H
