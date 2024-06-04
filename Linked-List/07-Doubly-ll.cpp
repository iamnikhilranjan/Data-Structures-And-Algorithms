#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head; //global variable - pointer to head node.

struct Node *GetNewNode(int x){
    Node *newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void InsertAtHead(int x){
    Node * newNode = GetNewNode(x);
    if( head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void Print(){
    Node *temp = head;
    cout << "forward: " ;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint(){
    struct Node *temp = head;
    if( temp == NULL) return; //empty list, exist;
    //Going to the  last node
    while( temp->next != NULL){
        temp = temp->next;
    }
    //Traversing backward using prev pointer
    cout << "Reverse: " ;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main(){
    head = NULL; //empty list
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();
}