#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include <iostream>

using namespace std;

class PhoneNumber
{
public:
    PhoneNumber();
    PhoneNumber(string oparator,string phoneNumber);
    //void set_phone(string phone);
    bool set_oparator(string oparator);
    string get_oparator();
    string get_phone();

private:
    string phoneNumber;
    string oparator;
    string allowedOperators[5]= {"GP","Robi","BanglaLink","Teletalk","KomKothaKoiben"};
};

#endif // PHONENUMBER_H_INCLUDED
