#include <iostream>

using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int x){
    if( top == MAX_SIZE - 1){
        cout << "Error: stack overflow" << endl;
        return;
    }
    A[++top] = x;
}

void Pop(){
    if(top == -1){
        cout << "There are no elements to pop" << endl;
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

void Print(){
    int i;
    cout << "Stack: ";
    for( int i = 0 ; i <= top ; i++){
        cout << A[i] << " ";
    }
    cout << endl;

}

int main(){
   Push(2); Print();
   Push(5); Print();
   Push(10); Print();
   Pop(); Print();
   Push(12); Print();
}