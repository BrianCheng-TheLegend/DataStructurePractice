#include"LinkedList_Practice.hpp"

int main(){
    LinkedList list;
    for(int i=0;i<10;i++)
        list.Insert(i);
    list.PrintAll();
    return 0;
}