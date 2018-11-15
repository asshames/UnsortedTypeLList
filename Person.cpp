#include "Person.h"
#include <iostream>

using namespace std;

template<class ItemType>
void Person<ItemType>::set_nationaID(ItemType nID)
{
    nationalID = nID;
}

template<class ItemType>
void Person<ItemType>::set_name(ItemType nam)
{
    name = nam;
}

template<class ItemType>
void Person<ItemType>::set_father_name(ItemType fName)
{
    fatherName =  fName;
}

template<class ItemType>
void Person<ItemType>::set_mother_name(ItemType mName)
{
    motherName = mName;
}

template<class ItemType>
void Person<ItemType>::set_marital_status(ItemType mStatus)
{
    maritalStatus = mStatus;
}

template<class ItemType>
void Person<ItemType>::set_spouse_name(ItemType sName)
{
    spouseName = sName;
}

template<class ItemType>
void Person<ItemType>::set_present_address(ItemType preAddress)
{
    presentAddress = preAddress;
}

template<class ItemType>
void Person<ItemType>::set_permanent_address(ItemType perAddress)
{
    presentAddress = perAddress;
}

template<class ItemType>
void Person<ItemType>::set_height(ItemType hayt)
{
    height = hayt;
}

template<class ItemType>
void Person<ItemType>::set_weight(int wayt)
{
    weight = wayt;
}

template<class ItemType>
void Person<ItemType>::set_eye_color(ItemType eColor)
{
    eyeColor = eColor;
}

template<class ItemType>
void Person<ItemType>::set_hair_color(ItemType hColor)
{
    hairColor = hColor;
}

template<class ItemType>
ItemType Person<ItemType>::get_nationaID()
{
    return nationalID;
}

template<class ItemType>
ItemType Person<ItemType>::get_name()
{
    return name;
}

template<class ItemType>
ItemType Person<ItemType>::get_father_name()
{
    return fatherName;
}

template<class ItemType>
ItemType Person<ItemType>::get_mother_name()
{
    return motherName;
}

template<class ItemType>
ItemType Person<ItemType>::get_marital_status()
{
    return maritalStatus;
}

template<class ItemType>
ItemType Person<ItemType>::get_spouse_name()
{
    return spouseName;
}

template<class ItemType>
ItemType Person<ItemType>::get_present_address()
{
    return presentAddress;
}

template<class ItemType>
ItemType Person<ItemType>::get_permanent_address()
{
    return permanentAddress;
}

template<class ItemType>
ItemType Person<ItemType>::get_height()
{
    return height;
}

template<class ItemType>
int Person<ItemType>::get_weight()
{
    return weight;
}

template<class ItemType>
ItemType Person<ItemType>::get_eye_color()
{
    return eyeColor;
}

template<class ItemType>
ItemType Person<ItemType>::get_hair_color()
{
    return hairColor;
}
