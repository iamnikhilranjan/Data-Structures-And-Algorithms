#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *link;
};

struct Node *Insert(struct Node *head, int x){
    Node *temp = new Node();
    temp->data = x;
    temp->link = NULL;

    if (head == NULL){ //if the list is empty make the new node head.
        head = temp;
        return head;
    }
    
    Node *temp2 = head;

    while( temp2->link != NULL){//traverse to the last node.
        temp2 = temp2->link;
    }
    
    temp2->link = temp;

    return head; //link the last node to the new node.
}

void Print(struct Node* p){ //Print elements using recursion.
    if( p==NULL) return;    //exit condition
    cout << p->data << " "; //first print the value at that node
    Print(p->link);         //recursive call
}

void ReversePrint(struct Node* p){ //Print elements in reverse orser using recursion.
    if( p==NULL) return;    //exit condition
    ReversePrint(p->link);         //recursive call
    cout << p->data << " "; //first print the value at that node
}

int main(){
    Node* head = NULL;

    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    head = Insert(head, 10);
    Print(head);
    cout << endl;
    ReversePrint(head);
}