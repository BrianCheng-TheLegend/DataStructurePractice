#include<iostream>
#include<istream>
#include<cstdlib>

struct Node
{
    int data;
    Node *next;
};


class CPPLinkedList{
private:
    Node *head;
    Node *temp;
public:
    CPPLinkedList();
    // ~CPPLinkedList();
    void Insert(int x);
    void PushBack(int x);
    void PrintAll();
    void Access(int x);
    void Delete(int x);
    int Count();
};

CPPLinkedList::CPPLinkedList(){
    head->next=nullptr;
    head->data=0;
}

void CPPLinkedList::Insert(int x){
    Node *nNode =new Node;
    if(!(head->next))
        nNode->next=nullptr;
    else
        nNode->next =head->next;

    head->next=nNode;
    nNode->data=x;
}
void CPPLinkedList::PushBack(int x){
    Node *nNode=new Node;
    temp=head;
    while(temp->next)
        temp=temp->next;

    temp->next=nNode;
    nNode->data=x;
    nNode->next=nullptr;
}


void CPPLinkedList::PrintAll(){
    temp=head->next;
    while(temp != NULL){
    std::cout<<temp->data<<" ";
    temp = temp->next;
    }
    std::cout<<std::endl;
}
void CPPLinkedList::Access(int x){
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
int CPPLinkedList::Count(){
    int size=0;
    temp=head->next;
    while(temp != NULL){
    temp = temp->next;
    size++;
    }
    return size;
}

void CPPLinkedList::Delete(int x){
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


int main(){
    CPPLinkedList list;
    int len;
    int num;
    int n;
    std::cout<<"How many varialble do you want to store?"<<std::endl;
    std::cin >>len;
    std::cout<<std::endl;

    for(int i=1;i<len+1;i++){
        list.PushBack(i);
    }
    // std::cout<<list.Count()<<std::endl;
    list.PrintAll();
    while(1){
        std::cout<<"Enter which node you want to delete: ";
        std::cin>>n;
        list.Delete(n);
        list.PrintAll();
        std::cout<<std::endl;
    }
    return 0;
}