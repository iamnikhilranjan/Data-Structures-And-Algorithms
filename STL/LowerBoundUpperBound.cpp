/*Concept of Upper Bound and lower bound*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
 int n ;
 cin >> n ;
 int a[n];
 for (int i = 0 ; i < n ; ++i)
 {
    cin >> a[i];
 }
 sort(a , a+n);
 for (int i = 0 ; i < n ; ++i )
 {
    cout << a[i] << " " ;
 }
 cout << endl ;
 int *ptr = lower_bound(a,a+n,5); 
 if (ptr == (a+n)){
    cout << "Not Found" ;
    return 0 ;
 }
 cout << (*ptr) << endl;
}
/*
for using UP and LB the array or vector must be sorted.
UB and LB both returns location . In case of array it will return pointer and for vector it will return itterator.
Time Complexity is log(n) -- where n is size of array
*/