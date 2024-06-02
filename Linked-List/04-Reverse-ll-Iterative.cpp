//important

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    Node *link;
};

struct Node* Insert(Node* head, int x){
    Node *temp = new Node();
    temp->data = x;
    temp->link = NULL;

    if(head == NULL){ //If the list is empty make the new node head
        head = temp;
        return head;
    }

    Node *temp2 = head;


    while ( temp2->link != NULL ){ //traverse to the last node.
        temp2 = temp2->link;
    }
    
    temp2->link = temp; //link the last node to the new node.

    return head;
}

void Print(Node *head){
    Node *temp = head;
    cout << "The list is : " << endl;
    while( temp != NULL){
        cout << temp->data << " " ;
        temp = temp->link;
    }
    cout << endl;
}

struct Node *Reverse(Node* head){
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while( current != NULL){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;

}

int main(){
 Node *head = NULL;
 head = Insert(head, 2);
 head = Insert(head, 4);
 head = Insert(head, 6);
 head = Insert(head, 8);
 head = Insert(head, 10);
 Print(head);
 head = Reverse(head);
 Print(head);
}

//traverse the whole list and at each step, modify the link field to make it point to the previous instead of next node

//corner test cases - when list is empty and list has only one node.(working)