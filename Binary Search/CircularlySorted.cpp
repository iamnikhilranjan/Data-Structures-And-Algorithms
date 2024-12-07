#include <bits/stdc++.h>
using namespace std;

int CircularArraySearch(int A[], int n , int x)
{
    int low = 0;
    int high = n-1;
    while(low <= high)
    {
     int mid = low + (high - low )/2;
     if (x == A[mid]) return mid;     // Case 1 : found X, yeah
     if (A[mid] <= A[high])           // Case 2 : right half is sorted
     {
        if (x>A[mid] && x <= A[high])
           low = mid + 1 ;           // go searching in right half
        else 
           high = mid - 1;           // go searching left   
     }
     else                            //Case 3: left half is sorted
     {
        if (A[low] <= x && x < A[mid])  // go searching in left sorted half
          high = mid - 1;
        else
          low = mid + 1 ;               // go searching right
     }
    }
    return -1;
}
int main(){
  int A[] = {12,14,18,21,3,6,8,9};
  int x;
  cout << "Enter a number : ";
  cin >> x;
  int index = CircularArraySearch(A,8,x);
  if (index == -1 )
     cout <<x<<" is not found in the array";
  else 
    cout << x <<" was found at  index "<<index;   
}