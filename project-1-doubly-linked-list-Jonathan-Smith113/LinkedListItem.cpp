//
// Created by jujun on 10/20/2020.
//

#include "LinkedListItem.h"
using namespace std;
LinkedListItem::LinkedListItem(){
    item = 0;
}

LinkedListItem::LinkedListItem(int i){
    item = i;
}

int LinkedListItem::getItem(){
    return item;
}

void LinkedListItem::setItem(int i){
    item = i;
}

LinkedListItem* LinkedListItem::getNextItem(){
    return next;
}

void LinkedListItem::setNextItem(LinkedListItem* n){
    next = n;
}

LinkedListItem* LinkedListItem::getPreviousItem(){
    return prev;
}

void LinkedListItem::setPreviousItem(LinkedListItem* p){
    prev = p;
}
