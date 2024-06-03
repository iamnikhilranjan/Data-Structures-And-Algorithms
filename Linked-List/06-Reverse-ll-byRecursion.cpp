#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node{
   int data;
   Node *link;
};

Node *head;

void Insert(int x){
   Node *temp = new Node();
   temp->data = x;
   temp->link = NULL;

   if( head == NULL){ //if list is empty, make the new node head
    head = temp;
    return;
   }

   Node *temp2 = head;
   while( temp2->link != NULL){
    temp2 = temp2->link;
   }

   temp2->link = temp;
}

void Print(){
    Node *temp = head;
    cout << "The list is: " << endl; 
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

void Reverse( struct Node *p){
    if( p->link == NULL){ // exit condition
       head = p;
       return;
    }
    Reverse( p->link );
    Node *q = p->link;
    q->link = p;
    p->link = NULL;
}

int main(){
   head = NULL;
   Insert(2);
   Insert(4);
   Insert(6);
   Insert(8);
   Insert(10);
   Print();
   Reverse(head);
   Print();
}