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
