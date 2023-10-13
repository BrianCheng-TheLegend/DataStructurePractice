#include<iostream>

struct Node{
    int data;
    Node *next;
};

class Newclass{
private:
    Node *a;
public:
    Newclass(){
        a->data=99;
        a->next=nullptr;
        temp->data=10;
        temp->next=a;
        // temp=NULL;
    }
    Node *temp;
    void print(){
        if(!(temp->next->next))
            std::cout<<"h"<<std::endl;
        if(!(a->next))
            std::cout<<"bingo"<<std::endl;
        // std::cout<<a.next<<std::endl;
    }
};


int main(){
    Newclass newclass;
    std::cout<<newclass.temp->next<<std::endl;
    std::cout<<newclass.temp->next->next<<std::endl;
    newclass.print();
    return 0;
}