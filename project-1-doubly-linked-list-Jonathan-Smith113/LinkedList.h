//
// Created by jujun on 10/20/2020.
//


#ifndef PROJECT_1_DOUBLY_LINKED_LIST_JONATHAN_SMITH113_LINKEDLIST_H
#define PROJECT_1_DOUBLY_LINKED_LIST_JONATHAN_SMITH113_LINKEDLIST_H
#include "LinkedListItem.h"
#include "LinkedListException.h"

using namespace std;

class LinkedList{
public:
    LinkedList();
    void addItemToFront(LinkedListItem* i);
    void addItemToBack(LinkedListItem* i);
    void addItemAt(int num,LinkedListItem* i);

    int getLength();
    LinkedListItem* getFirstItem();
    LinkedListItem* getLastItem();

    void printList();
    void printListBackwards();

    LinkedListItem* removeFirstItem();
    LinkedListItem* removeLastItem();
    LinkedListItem* removeItemAt(int i);

    LinkedListItem* getItemAt(int i);
private:
    int size;
    LinkedListItem* head;
    LinkedListItem* tail;
};

#endif //PROJECT_1_DOUBLY_LINKED_LIST_JONATHAN_SMITH113_LINKEDLIST_H
