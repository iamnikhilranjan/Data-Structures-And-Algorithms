#include <bits/stdc++.h>
using namespace std;

int main()
{
  map <int,int> m;
  m[3] = 4 ;
  m[9] = 5;
  m[2] = 43;
  m[1] = 3;
  m[0] = 9;

  auto it = m.lower_bound(rand());
  cout<<(*it.first)<<endl;
    
}