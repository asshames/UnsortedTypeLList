#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include <iostream>

using namespace std;

//template<class ItemType>
class PhoneNumber
{
public:
    PhoneNumber();
    PhoneNumber(string oparator);
    void set_phone(string phone);
    void set_oparator(string oparator);
    string get_oparator();
    string get_phone();

private:
    string phoneNumber;
    string oparator;
};

#endif // PHONENUMBER_H_INCLUDED
