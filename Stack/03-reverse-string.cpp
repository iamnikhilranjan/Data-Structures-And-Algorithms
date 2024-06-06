#include <iostream>
#include <cstring>
#include <stack> //stack from Standard Template Linrary
using namespace std;

void Reverse( char C[], int n){
   stack<char> S;

   //loop for push
   for (int i = 0 ; i < n ; i ++){ //O(n)
    S.push(C[i]);
   }

   //loop for pop
   for (int i = 0 ; i < n ; i++){ //O(n)
    C[i] = S.top(); //overwrite the character at index i.
    S.pop();        //perform  pop.
   }
}

int main(){
    char C[51];
    cout << "Enter a atring : " ;
    // gets(C);
    cin.getline(C, 51);
    Reverse(C, strlen(C));
    cout << "Output = " << C << endl;

}