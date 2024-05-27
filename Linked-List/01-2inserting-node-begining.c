//declaring head as local variable not global

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* Insert( int x, struct Node* head){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(struct Node* head){
    printf("List is: ");
    while(head != NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}

int main(){
 struct Node* head = NULL;
 int n;
 printf("Enter size of list: ");
 scanf("%d",&n);
 for (int i = 0 ; i < n ; i++){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    head = Insert(x, head);
    Print(head);
 }
}