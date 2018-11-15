#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>

using namespace std;

template<class ItemType>

class Person
{
private:
    string nationalID;
    string name;
    string fatherName;
    string motherName;
    string maritalStatus;
    string spouseName;
    string presentAddress;
    string permanentAddress;
    string height;
    int weight;
    string eyeColor;
    string hairColor;

public:
    void set_nationaID(string nID);
    void set_name(string nam);
    void set_father_name(string fName);
    void set_mother_name(string mName);
    void set_marital_status(string mStatus);
    void set_spouse_name(string sName);
    void set_present_address(string preAddress);
    void set_permanent_address(string perAddress);
    void set_height(string hayt);
    void set_weight(int wayt);
    void set_eye_color(string eColor);
    void set_eye_color(string hColor);

    string get_nationaID();
    string get_name();
    string get_father_name();
    string get_mother_name();
    string get_marital_status();
    string get_spouse_name();
    string get_present_address();
    string get_permanent_address();
    string get_height();
    int get_weight();
    string get_eye_color();
    string get_eye_color();

};


#endif // PERSON_H_INCLUDED
