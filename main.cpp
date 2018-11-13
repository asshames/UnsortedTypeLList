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
    Mylist.put_item(4);
    bool flag;
    Mylist.get_item(4,flag);


    return 0;
}
