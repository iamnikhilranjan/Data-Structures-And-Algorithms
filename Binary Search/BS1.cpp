#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> v, int n, int ToSearch){
	int start = 0;
	int end = n-1 ;
	while(start <= end){
		int mid = (start + end)/2;
		if (v[mid] == ToSearch){
			return mid;
		}
		else if (ToSearch < v[mid]){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for (int i = 0 ; i < n ; i ++){
		int x;
		cin >> x;
		v[i] = x;
	}
	sort(v.begin(),v.end());
	for (int i = 0 ; i <n ; i++){
		cout << v[i]<<" ";
	}
	cout << endl;
	int ToSearch;
	cin >> ToSearch;
	int searched = BinarySearch(v,n,ToSearch);
	if (searched != -1)
	  cout << "Element "<<ToSearch<<" is at "<<searched<<" index.";
	else
	  cout << "Element is not present!"  ;

}