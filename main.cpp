#include <iostream>
#include"UnsortedType.cpp"

using namespace std;

int main()
{

    UnsortedType<int> Mylist;
    cout<<"Length: "<<Mylist.get_length()<<endl;
    if(Mylist.is_full())
        cout<<"list is full"<<endl;
    else
        cout<<"list is not full"<<endl;


    return 0;
}
