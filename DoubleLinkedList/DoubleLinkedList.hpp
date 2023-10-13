#ifndef __IOSTREAM_H
#include<iostream>
#endif

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

class DoubleDoubleDoubleLinkedList{
private:
    Node *head;
    Node *temp;
public:
    DoubleDoubleDoubleLinkedList();
    ~DoubleDoubleDoubleLinkedList();
};