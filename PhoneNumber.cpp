#include "PhoneNumber.h"
#include <iostream>

using namespace std;

template<class ItemType>
PhoneNumber<ItemType>::PhoneNumber()
{

}

template<class ItemType>
PhoneNumber<ItemType>::PhoneNumber(ItemType oparator)
{
    this->oparator= oparator;
}

template<class ItemType>
ItemType PhoneNumber<ItemType>::get_oparator()
{
    return this->oparator;
}

template<class ItemType>
ItemType PhoneNumber<ItemType>::get_phone()
{
    return this->phoneNumber;
}

template<class ItemType>
void PhoneNumber<ItemType>::set_phone(ItemType phone)
{
    this->phoneNumber = phone;
}

template<class ItemType>
void PhoneNumber<ItemType>::set_oparator(ItemType oparator)
{
    this->oparator = oparator;
}
