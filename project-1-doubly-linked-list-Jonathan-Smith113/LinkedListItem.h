//
// Created by jujun on 10/20/2020.
//

#ifndef PROJECT_1_DOUBLY_LINKED_LIST_JONATHAN_SMITH113_LINKEDLISTITEM_H
#define PROJECT_1_DOUBLY_LINKED_LIST_JONATHAN_SMITH113_LINKEDLISTITEM_H
#include "LinkedListException.h"

using namespace std;

class LinkedListItem{
public:
    LinkedListItem();
    LinkedListItem(int i);

    int getItem();
    LinkedListItem* getNextItem();
    LinkedListItem* getPreviousItem();

    void setItem(int i);
    void setNextItem(LinkedListItem* n);
    void setPreviousItem(LinkedListItem* p);
private:
    int item;
    LinkedListItem* next;
    LinkedListItem* prev;
};
#endif //PROJECT_1_DOUBLY_LINKED_LIST_JONATHAN_SMITH113_LINKEDLISTITEM_H
