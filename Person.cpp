#include "Person.h"
#include <iostream>

using namespace std;


void Person::set_nationaID(string nID)
{
    nationalID = nID;
}


void Person::set_name(string nam)
{
    name = nam;
}


void Person::set_father_name(string fName)
{
    fatherName =  fName;
}


void Person::set_mother_name(string mName)
{
    motherName = mName;
}


void Person::set_marital_status(string mStatus)
{
    maritalStatus = mStatus;
}


void Person::set_spouse_name(string sName)
{
    spouseName = sName;
}


void Person::set_present_address(string preAddress)
{
    presentAddress = preAddress;
}


void Person::set_permanent_address(string perAddress)
{
    presentAddress = perAddress;
}


void Person::set_height(double height)
{
    this->height = height;
}


void Person::set_weight(int weight)
{
    this->weight = weight;
}


void Person::set_eye_color(string eColor)
{
    eyeColor = eColor;
}


void Person::set_hair_color(string hColor)
{
    hairColor = hColor;
}


string Person::get_nationalID()
{
    return nationalID;
}


string Person::get_name()
{
    return name;
}


string Person::get_father_name()
{
    return fatherName;
}


string Person::get_mother_name()
{
    return motherName;
}


string Person::get_marital_status()
{
    return maritalStatus;
}


string Person::get_spouse_name()
{
    return spouseName;
}


string Person::get_present_address()
{
    return presentAddress;
}


string Person::get_permanent_address()
{
    return permanentAddress;
}


double Person::get_height()
{
    return height;
}


int Person::get_weight()
{
    return weight;
}


string Person::get_eye_color()
{
    return eyeColor;
}


string Person::get_hair_color()
{
    return hairColor;
}


void Person::print()
{
    cout << "-------------------------------------------------" << endl;

    cout << "Name: " << this->name << endl;
    cout << "National ID: " << this->nationalID << endl;
    cout << "National ID: " << this->fatherName << endl;
    cout << "National ID: " << this->motherName << endl;
    cout << "National ID: " << this->maritialStatus << endl;
    cout << "National ID: " << this->spouseName << endl;
    cout << "National ID: " << this->presentAddress << endl;

}

