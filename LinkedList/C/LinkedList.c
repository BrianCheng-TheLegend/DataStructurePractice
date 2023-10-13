#include<stdlib.h>
#include<stdio.h>
// definition of node 
struct Node
{
    int data;
    struct Node *next;    
};
struct Node *Insert(struct Node **pointerToHead,int x)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    (*temp).data = x;
    temp->next = NULL;
    if(pointerToHead != NULL)
        temp->next = pointerToHead;
    pointerToHead=temp;
    return pointerToHead;
}

void Print(struct Node *head){
    printf("List is:");
    while (head != NULL)
    {
        printf(" %d",head->data);
        head = head->next;
    }
    printf("\n");
}


struct Node *head;

int main(){
    head =NULL;// empty list;
    printf("How many numbers?\n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        head = Insert(&head,x);
        Print(head);
    }
}