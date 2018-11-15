#ifndef PHONENUMBER_H_INCLUDED
#define PHONENUMBER_H_INCLUDED
#include <iostream>

using namespace std;

template<class ItemType>
class PhoneNumber
{
public:
    PhoneNumber();
    PhoneNumber(ItemType oparator);
    void set_phone(ItemType phone);
    void set_oparator(ItemType oparator);
    ItemType get_oparator();
    ItemType get_phone();

private:
    ItemType phoneNumber;
    ItemType oparator;
};

#endif // PHONENUMBER_H_INCLUDED
