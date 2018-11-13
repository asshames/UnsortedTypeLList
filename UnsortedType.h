#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template<class ItemType>
class UnsortedType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next = NULL;
    };
public:
    UnsortedType();
    ~UnsortedType();

    bool is_full();
    int get_length();
    void make_empty();
    ItemType get_item(ItemType, bool&);
    void put_item(ItemType);
    void reset_list();
    ItemType get_next_item();

private:
    int length;
    NodeType* listData;
    NodeType* currentPosition;
};


#endif // UNSORTEDTYPE_H_INCLUDED
