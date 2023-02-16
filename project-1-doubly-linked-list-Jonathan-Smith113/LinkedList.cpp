//
// Created by jujun on 10/20/2020.
//
#include "LinkedList.h"
#include "iostream"
using namespace std;
LinkedList::LinkedList(){
    size = 0;
    head = nullptr;
    tail = nullptr;
}

void LinkedList::addItemToFront(LinkedListItem* i) {
    if (i == nullptr)
        throw LinkedListException();
    else {
        if(size==0){
            tail = i;
            head = i;
            i->setNextItem(nullptr);
            i->setPreviousItem(nullptr);
            size++;
        }
        else{
            i->setNextItem(head);
            i->setPreviousItem(nullptr);
            head->setPreviousItem(i);
            head = i;
            size++;
        }
    }
}

void LinkedList::addItemToBack(LinkedListItem* i){
    if (i == nullptr)
        throw LinkedListException();
    else {
        if(size==0){
            tail = i;
            head = i;
            i->setNextItem(nullptr);
            i->setPreviousItem(nullptr);
            size++;
        }
        else{
            i->setNextItem(nullptr);
            i->setPreviousItem(tail);
            tail->setNextItem(i);
            tail = i;
            size++;
        }
    }
}

void LinkedList::addItemAt(int num,LinkedListItem* i){
    if(i == nullptr)
        throw LinkedListException();
    if(num > size)
        throw LinkedListException();
    else if(num == 0){
        addItemToFront(i);
    }
    else if(num == size){
        addItemToBack(i);
    }
    else{
        LinkedListItem* nNode = getItemAt(num);
        i->setNextItem(nNode);
        i->setPreviousItem(nNode->getPreviousItem());
        nNode->getPreviousItem()->setNextItem(i);
        nNode->setPreviousItem(i);
        size++;
    }
}

int LinkedList::getLength() {
    return size;
}

LinkedListItem* LinkedList::getFirstItem(){
    return head;
}

LinkedListItem* LinkedList::getLastItem(){
    return tail;
}

void LinkedList::printList(){
    LinkedListItem* curr = head;
    while(curr != nullptr){
        cout << curr->getItem() << endl;
        curr = curr->getNextItem();
    }
    cout << endl;
}

void LinkedList::printListBackwards(){
    LinkedListItem* curr = tail;
    while(curr != nullptr){
        cout << curr->getItem() << endl;
        curr = curr->getPreviousItem();
    }
    cout << endl;
}

LinkedListItem* LinkedList::removeFirstItem(){
    LinkedListItem* curr = head;
    if(size == 0){
        return nullptr;
    }
    else if(size == 1){
        head = nullptr;
        tail = nullptr;
        size--;
    }
    else{
        head = head->getNextItem();
        head->setPreviousItem(nullptr);
        curr->setNextItem(nullptr);
        size--;
    }
    return curr;
}

LinkedListItem* LinkedList::removeLastItem() {
    LinkedListItem* curr = tail;
    if(size == 0){
        return nullptr;
    }
    else if(size == 1){
        head = nullptr;
        tail = nullptr;
        size--;
    }
    else{
        tail = tail->getPreviousItem();
        tail->setNextItem(nullptr);
        curr->setPreviousItem(nullptr);
        size--;
    }
    return curr;
}

LinkedListItem* LinkedList::removeItemAt(int i) {
    LinkedListItem *curr = getItemAt(i);
    if (size == 0) {
        return nullptr;
    } else if (size == 1) {
        head = nullptr;
        tail = nullptr;
        size--;
    }

    if (i == 0) {
        removeFirstItem();
    }
    else if(i == size-1) {
        removeLastItem();
    }
    else{
        curr->getNextItem()->setPreviousItem(curr->getPreviousItem());
        curr->getPreviousItem()->setNextItem(curr->getNextItem());
        curr->setNextItem(nullptr);
        curr->setPreviousItem(nullptr);
        size--;
    }
    return curr;
}

LinkedListItem* LinkedList::getItemAt(int i){
    if(i > size-1){
        throw LinkedListException();
    }
    LinkedListItem* curr = head;
    for(int j=0;j<i;j++){
        curr = curr->getNextItem();
    }
    return curr;
}
