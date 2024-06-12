#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
//two global variables to store address of front and rear node
struct Node *front = NULL;
struct Node *rear = NULL;

//To Enqueue an integer
void Enqueue(int x){
    struct Node *temp = (struct Node *)(malloc(sizeof(struct Node)));
    temp->data = x;
    temp->next = NULL;

    if( front==NULL && rear==NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}

//To Dequeue an integer.
void Dequeue(){
    struct Node *temp = front;
    if(front == NULL ){
        printf("Queue is empty\n");
        return ;
    }
    if( front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
}

int Front(){
    if(front == NULL){
        printf("queue is empty.\n");
        return -1;
    }
    return front->data;
}

void Print(){
    struct Node *temp = front;
    printf("Queue is : ");
    while( temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    Enqueue(2); Print();
    Enqueue(4); Print();
    Enqueue(6); Print();
    Dequeue(); Print();
    Enqueue(8); Print();
}