#include "UnsortedType.h"
#include <iostream>
#include <exception>

using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    listData = NULL;
    currentPosition = NULL;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType()
{
    //make_empty();
}

template <class ItemType>
int UnsortedType<ItemType>::get_length()
{
    return length;
}

template <class ItemType>
bool UnsortedType<ItemType>::is_full()
{
    NodeType* location = NULL;
    try
    {
        location = new NodeType;
        delete location;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
    return false;
}

template <class ItemType>
void UnsortedType<ItemType>::put_item(ItemType item)
{
    NodeType* localtion = new NodeType;
    localtion->info = item;
    localtion->next = listData;
    listData = localtion;
    length++;
}

template <class ItemType>
ItemType UnsortedType<ItemType>::get_item(ItemType item, bool &found)
{
    ItemType returnItem;
    NodeType* location = listData;
    found = false;
    returnItem = item;

    while(location != NULL)
    {
        if(item == location->info)
        {
            found = true;
            returnItem = location->info;
            break;
        }
        else
            location = location->next;
    }

    if (found)
        cout<<"Item is found"<<endl;
    else
        cout<<"Item is not found"<<endl;

    return returnItem;
}


