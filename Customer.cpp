#include "Customer.h"
#include "PhoneNumber.h"
#include <iostream>

using namespace std;

Customer::Customer(string nid,string phone,string oparator): Person(nid){
    this->phone.put_item(PhoneNumber(phone,oparator));
}


void Customer::insert_phone_oparator(string phone,string oparator)
{
    if(phone.size()<15){
        this->phone.put_item(PhoneNumber(phone,oparator));
    }
}

void Customer::get_phone_numbers()
{
    //int counter= 1;

    int length= phone.get_length();

    for(int index=0;index<length;index++){
        bool isRetrived= false;
        PhoneNumber temp;

        phone.get_item(PhoneNumber,isRetrived);
        cout << "Phone Number " << counter << ": " << temp.get_phone() << endl;

    }

    /*for(PhoneNumber phone : this->phone){
        cout << "Phone Number " << counter << ": " << phone.get_phone() << endl;
        counter++;
    }*/
}

void Customer::get_operators()
{
    int length= phone.get_length();

    for(int index=0;index<length;index++){
        bool isRetrived= false;
        PhoneNumber temp;

        phone.get_item(PhoneNumber,isRetrived);

        cout << "Phone Number " << counter << ": " << temp.get_oparator() << endl;

    }
}

void Customer::print_customer_info()
{
    int length= phone.get_length();


    cout << "----------------------------------------------" << endl;
    for(int index=0;index<length;index++){
        bool isRetrived= false;

        PhoneNumber temp;

        phone.get_item(PhoneNumber,isRetrived);

        cout << "Operator " << temp.get_oparator() << " -> " << "Number: " << temp.get_phone() << endl;
    }
    cout << "----------------------------------------------" << endl;
}

bool Customer::change_operator(string phoneNumber,string newOparator){

    int length= phone.get_length();

    for(int index=0;index<length;index++){
        bool isRetrived= false;
        PhoneNumber temp;

        phone.get_item(PhoneNumber,isRetrived);
        if(temp.get_phone()==phoneNumber)
            temp.set_oparator(newOparator);
        return true;
    }

    return false;
}



int Customer::delete_phone(string phoneNumber){

    int length= phone.get_length();

    for(int index=0;index<length;index++){
        bool isRetrived= false;
        PhoneNumber temp;

        phone.get_item(PhoneNumber,isRetrived);

        if(temp.get_phone()==phoneNumber){
            cout << "Operator " << temp.get_oparator() << " -> " << "Number: " << temp.get_phone() << " [DELETED]" << endl;
            phone.delete_item(temp);
            cout << "Deleted Successfully!" << endl;
            return phone.get_length();
        }
    }
}

int Customer::get_phone_size(){
    return phone.get_length();
}
