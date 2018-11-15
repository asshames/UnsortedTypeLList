#ifndef COMPANY_H_INCLUDED
#define COMPANY_H_INCLUDED

#include "UnsortedType.cpp"

class Company{

private:

    string company_name;
    UnsortedType<Customer> Customers;

public:
    Company();
    void printCustomers();

};

#endif // COMPANY_H_INCLUDED
