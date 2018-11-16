#include "Company.h"
#include "Customer.h"
#include <iostream>

using namespace std;

Company::Company(string companyName){
    this->companyName= companyName;
}

void Company::insert_customer(Customer c){

    Customers.put_item(c);

}


void Company::print_customers(){

    int len= Customers.get_length();

    for(int i=0;i<len;i++){
        Customer temp= Customers.get_next_item();
        temp.print();
        temp.print_customer_info();
    }
}
