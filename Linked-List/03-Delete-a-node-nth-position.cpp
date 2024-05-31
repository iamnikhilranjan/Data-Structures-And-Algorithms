#include <stdio.h>
#include <stdlib.h>

struct Node{
 int data ;
 Node* link;
};

Node* head; //global variable

//Inserting element at the end of the list
void Insert(int data)
{ 
 Node* temp = new Node();
    temp->data = data;
    temp->link = NULL;
    
    if (head == NULL) { // If the list is empty, make the new node the head
        head = temp;
        return;
    }
    
    Node* temp2 = head;
    while (temp2->link != NULL) { // Traverse to the last node
        temp2 = temp2->link;
    }
    
    temp2->link = temp; // Link the last node to the new node

}

void Delete(int n){
    Node* temp1 = head;
    if(n==1){
        head = temp1->link; //head now points to second node.
        free(temp1);
        return;
    }

    for(int i = 0 ; i < n-2 ; i++){
        temp1 = temp1->link; //temp1 points to(n-1)th node
        }
        Node* temp2 = temp1->link; //nth node
        temp1->link = temp2->link; //(n+1)th node
        free(temp2);//delete temp2;
    

}

void Print(){
    Node* temp = head;
    printf("The List is: ");
    while( temp != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){ 
    head = NULL; //empty list

    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6);

    Print();
    int n;
    printf("Enter any position: ");
    scanf("%d",&n);
    Delete(n);
    Print();
    
    return 0;
}

