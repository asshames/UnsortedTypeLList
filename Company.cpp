#include "Company.h"
#include "Customer.h"
#include <iostream>

Company::Company(string name){
    this->name= name;
}

Customer Company::search_by_id(){

}

void Company::printCustomers(){

    int len= Customers.get_length();

    for(int i=0;i<len;i++){
        Customer temp= Customers.get_next_item();

    }
}
