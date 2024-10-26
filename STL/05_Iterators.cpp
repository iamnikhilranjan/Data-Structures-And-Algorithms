//Iterators 
// iterators container ke elements ko point karte h.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it = v.begin(); //iterators ka value, pointers ki trh nikalte h
    // cout << (*(it)) << endl;
    // cout << (*(it + 1)) << endl;

    for (it=v.begin(); it != v.end() ; ++it)
    {
        cout<<(*it)<<" ";
    }
}

/*
NOTES:-
⚡vectors can be accessed using indexing
⚡Containers like maps, sets -- no indexing
⚡Iterators are used here to access the value of containers (and to perform operations)
⚡pointer-points to memory address
⚡Iterators-Points to elements of a container

⚡v.begin() --> V[0]
⚡v.end() --> Next to last element of the vector.
⚡difference in (it+1) and (++it):
      -it++ --> Next iterator    
      -(it+1) --> Next location  
      -In vectors both are same but not in case of maps and sets. 
      -iterators in case of vectors -- continious.
      -iterators in case of maps and sets -- discontinous.
*/