//Linked list implementation of stacks

#include <iostream>

using namespace std;

struct Node{
   int data;
   Node *link;
};
Node *top;

void Push(int x){
    Node *temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop(){
    Node *temp;
    if(top == NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}

void Print(){
    Node *temp = top;
    cout << "Stack : " ;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int main(){
    top = NULL;
    Push(2); Print();
    Push(4); Print();
    Push(6); Print();
    Push(8); Print();
    Pop(); Print();
    Push(10); Print();

    return 0;

}