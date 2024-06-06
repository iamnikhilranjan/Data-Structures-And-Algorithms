#include <iostream>
#include <stack>

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
    
    if( head == NULL){
        head = temp;
        return;
    }
    
    Node *temp2 = head;
    while( temp2->link != NULL){
        temp2 = temp2->link;
    }

    temp2->link = temp;
}

void Reverse(){
    if( head == NULL) return;
    stack<struct Node*> S;
    Node *temp = head;
    while( temp != NULL){
        S.push(temp);
        temp = temp->link;
    } 
    temp = S.top();
    head = temp;
    S.pop();
    while(!S.empty()){
        temp->link = S.top();
        S.pop();
        temp = temp->link;
    }
    temp->link = NULL;
}

void Print(){
    Node *temp = head;
    cout << "List is : " ;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}



int main(){
  head = NULL;
  Insert(2); Print();
  Insert(4); Print();
  Insert(6); Print();
  Insert(8); Print();
  Insert(10); Print();
  Reverse(); Print();

  return 0;
}