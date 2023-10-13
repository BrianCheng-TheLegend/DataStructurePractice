#ifndef __IOSTREAM_H
#include<iostream>
#endif

struct Node
{
    int data;
    Node *next;
};

class LinkedList{
private:
    Node *head;
    Node *temp;
public:
    LinkedList();
    // ~LinkedList();
    void Insert(int x);
    void PushBack(int x);
    void Access(int x);
    void PrintAll();
    void Delete(int x);
    int Count();
};

LinkedList::LinkedList(){
    head->next=nullptr;
    head->data=0;
}
// LinkedList::~LinkedList(){
//     std::cout<<"hi"<<std::endl;
// }

void LinkedList::Insert(int x){
    Node *nNode =new Node;
    if(!(head->next))
        nNode->next=nullptr;
    else
        nNode->next =head->next;
    head->next=nNode;
    nNode->data=x;
}
void LinkedList::PushBack(int x){
    Node *nNode=new Node;
    temp=head;
    while(temp->next)
        temp=temp->next;

    temp->next=nNode;
    nNode->data=x;
    nNode->next=nullptr;
}

void LinkedList::PrintAll(){
    temp=head->next;
    while(temp != NULL){
    std::cout<<temp->data<<" ";
    temp = temp->next;
    }
    std::cout<<std::endl;
}
void LinkedList::Access(int x){
    int len=1;
    temp=head->next;
    while(temp != NULL){
    if(len==x){
        std::cout<<"Number at this point: "<<temp->data<<std::endl;
    }
    temp = temp->next;
    len++;
    }
    if(len-1<x){
        std::cout<<"Out of list"<<std::endl;
    }
}

void LinkedList::Delete(int x){
    int len=1;
    bool out=true;
    temp=head;
    while(temp != NULL){
    if(len==x){
        if(temp->next!=NULL){
            temp->next=temp->next->next;
            out=false;
        }
    }
    temp = temp->next;
    len++;
    }
    if(out){
        std::cout<<"Out of list"<<std::endl;
    }
}
int LinkedList::Count(){
    int size=0;
    temp=head->next;
    while(temp != NULL){
    temp = temp->next;
    size++;
    }
    return size;
}