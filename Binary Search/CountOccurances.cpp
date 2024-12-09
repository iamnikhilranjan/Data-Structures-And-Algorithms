#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int A[],int n, int x, bool SearchFirst){
    int low = 0, high = n-1, result = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if (A[mid] == x)
        {
            result = mid;
            if (SearchFirst)
              high = mid - 1 ;
            else
             low = mid + 1;  
        }
        else if ( x<A[mid]) high = low-1;
        else low = mid +1;
    }
    return result;
}
int main(){
 int A[] = {1,4,3,5,8,7,4,0,9,8,5,6,7};
 int n = sizeof(A)/sizeof(A[0]);
 sort(A,A+n);
 int x;
 scanf("%d",&x);
 int FirstIndex = BinarySearch(A,n,x,true);
 int LastIndex = BinarySearch(A,n,x,false);
 if ( FirstIndex == -1){
    cout << "Count of "<<x<<"is 0";
 }
 else{
    cout << "Count of "<<x<<" is "<<(LastIndex-FirstIndex+1);
 }
 return 0;
}