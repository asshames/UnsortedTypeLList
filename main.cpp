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
    Mylist.put_item(5);
    Mylist.put_item(6);
    bool flag;
    Mylist.get_item(4,flag);

    Mylist.make_empty();
    Mylist.get_item(4,flag);
    Mylist.put_item(4);
    Mylist.put_item(5);
    Mylist.put_item(6);
    flag = Mylist.delete_item(5);
    if(flag)
        cout<<"Item is delete"<<endl;
    else
        cout<<"Item is not delete"<<endl;


    return 0;
}
