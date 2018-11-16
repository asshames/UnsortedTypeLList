#ifndef COMPANY_H_INCLUDED
#define COMPANY_H_INCLUDED

#include <iostream>
#include "UnsortedType.cpp"
#include "Customer.h"

using namespace std;

class Company{

private:

    string companyName;
    UnsortedType<Customer> Customers;

public:
    Company(string companyName);
    void insert_customer(Customer c);
    void print_customers();

};

#endif // COMPANY_H_INCLUDED
