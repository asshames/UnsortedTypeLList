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
