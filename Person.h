#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>

using namespace std;

template<class ItemType>

class Person
{
private:
    ItemType nationalID;
    ItemType name;
    ItemType fatherName;
    ItemType motherName;
    ItemType maritalStatus;
    ItemType spouseName;
    ItemType presentAddress;
    ItemType permanentAddress;
    ItemType height;
    int weight;
    ItemType eyeColor;
    ItemType hairColor;

public:
    void set_nationaID(ItemType nID);
    void set_name(ItemType nam);
    void set_father_name(ItemType fName);
    void set_mother_name(ItemType mName);
    void set_marital_status(ItemType mStatus);
    void set_spouse_name(ItemType sName);
    void set_present_address(ItemType preAddress);
    void set_permanent_address(ItemType perAddress);
    void set_height(ItemType hayt);
    void set_weight(int wayt);
    void set_eye_color(ItemType eColor);
    void set_hair_color(ItemType hColor);

    ItemType get_nationaID();
    ItemType get_name();
    ItemType get_father_name();
    ItemType get_mother_name();
    ItemType get_marital_status();
    ItemType get_spouse_name();
    ItemType get_present_address();
    ItemType get_permanent_address();
    ItemType get_height();
    int get_weight();
    ItemType get_eye_color();
    ItemType get_hair_color();

};


#endif // PERSON_H_INCLUDED
