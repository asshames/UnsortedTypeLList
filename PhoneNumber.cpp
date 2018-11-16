#include "PhoneNumber.h"
#include <iostream>

using namespace std;


PhoneNumber<string>::PhoneNumber()
{

}


PhoneNumber<string>::PhoneNumber(string oparator,string phoneNumber)
{
    for(int index=0;index<5;index++)
    {
        if(oparator==allowedOperators[index])
        {
            this->oparator= oparator;
            this->phoneNumber= phoneNumber;
        }
    }
}


string PhoneNumber<string>::get_oparator()
{
    return this->oparator;
}


string PhoneNumber<string>::get_phone()
{
    return phoneNumber;
}


/*void PhoneNumber<string>::set_phone(string phone)
{
    this->phoneNumber = phone;
}*/


bool PhoneNumber<string>::set_oparator(string oparator)
{
    for(int index=0;index<5;index++)
    {
        if(oparator==allowedOperators[index])
        {
            this->oparator= oparator;
            return true;
        }
    }

    return false;
}
