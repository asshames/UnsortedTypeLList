#include "Customer.h"
#include "PhoneNumber.h"
#include <iostream>

using namespace std;

Customer::Customer(string nid,string phone,string oparator): Person(nid){
    this->phone.push_back(PhoneNumber(phone,oparator));
}


void Customer::insert_phone_oparator(string phone,string oparator)
{
    if(phone.size()<15){
        this->phone.push_back(PhoneNumber(phone,oparator));
    }
}

void Customer::get_phone_numbers()
{
    int counter= 1;

    for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << counter << ": " << phone.get_phone() << endl;
        counter++;
    }
}

void Customer::get_operators()
{
    //Instructor Comments:
    //This is get_operator function.
    //are you getting the operator for a phone?
    //You are calling phone.get_phone() which is returning your number.
    //This function wont work as intended.
    //This is an overlooked bug
    //Minor issue, -0.5.
    //Fix the bug.
    int counter= 1;

    for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << counter << ": " << phone.get_phone() << endl;
    }
}

void Customer::print_customer_info()
{
    cout << "----------------------------------------------" << endl;
    for(int index=0;index<phone.size();index++){
        cout << "Operator " << phone[index].get_oparator() << " -> " << "Number: " << phone[index].get_phone() << endl;
    }
    cout << "----------------------------------------------" << endl;
}

bool Customer::change_operator(string phoneNumber,string newOparator){

   // cout << "----------------------------------------------" << endl;
    for(int index=0;index<phone.size();index++){
        if(phone[index].get_phone()==phoneNumber)
            phone[index].set_oparator(newOparator);
        return true;
    }

    return false;
}


// helper function
int Customer::delete_phone(string phoneNumber){

    //Instructor Comments:
    //Major bug found.
    //Return type int. only returns from inside the loop.
    //This code wont compile.
    //Penalty: -5.
    //Change the function signature.
    //This function should return only bool.

    for(int index=0;index<phone.size();index++){
        if(phone[index].get_phone()==phoneNumber){
            cout << "Operator " << phone[index].get_oparator() << " -> " << "Number: " << phone[index].get_phone() << " [DELETED]" << endl;
            phone.erase(phone.begin()+index);
            cout << "Deleted Successfully!" << endl;
            return phone.size();
        }
    }
}

int Customer::get_phone_size(){
    return phone.size();
}
