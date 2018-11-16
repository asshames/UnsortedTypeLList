#include "UnsortedType.h"
#include <iostream>
#include <exception>
#pragma once
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
    make_empty();
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

template <class ItemType>
void UnsortedType<ItemType>::make_empty()
{
    NodeType* locationToDelete = NULL;
    while (listData != NULL)
    {
        locationToDelete = listData;
        listData = listData->next;
        if (locationToDelete == currentPosition)
        {
            currentPosition = currentPosition->next;
        }
        delete locationToDelete;
        length--;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::reset_list()
{
    currentPosition = NULL;
}

template <class ItemType>
bool UnsortedType<ItemType>::delete_item(ItemType item)
{
    NodeType* currentLocation = listData;
    NodeType* previousLocation = NULL;
    bool found = false;
    if(currentLocation != NULL)
    {
        found = true;
        listData = listData->next;
        delete previousLocation;
        length--;
    }
    else
    {
        previousLocation = currentLocation;
        currentLocation = currentLocation->next;
        bool moreToSearch = (currentLocation != NULL);
        while(moreToSearch && !found)
        {
            if(item == currentLocation->info)
            {
                found = true;
                NodeType * locationToDelete = currentLocation;
                previousLocation->next = currentLocation->next;
                locationToDelete->next = NULL;
                delete locationToDelete;
                length--;
            }
            else
            {
                previousLocation = currentLocation;
                currentLocation = currentLocation->next;
                moreToSearch = (currentLocation != NULL);
            }
        }
    }

    return found;
}

template <class ItemType>
ItemType UnsortedType<ItemType>:: get_next_item()
{
    if(currentPosition == NULL)
        currentPosition = listData;
    else
        currentPosition = currentPosition->next;
    if(currentPosition == NULL)
    {
        cout<<"Reached at the end of the list " <<endl;
        cout<<"Print garbage value"<<endl;
        return ItemType();
    }
    return currentPosition->info;
}
