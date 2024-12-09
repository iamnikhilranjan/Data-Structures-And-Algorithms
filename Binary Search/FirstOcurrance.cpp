// To find first occurance of  number in a array
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int A[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (x == A[mid])
        {
            result = mid;
            high = mid - 1;
        }
        else if (x < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}
int main()
{
    int n = 10;
    int A[n] = {1, 3, 2, 6, 4, 9, 7, 3, 2, 3};
    sort(A, A + n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    int x;
    cout << "Enter a number : ";
    cin >> x;
    int res = BinarySearch(A, n, x);
    cout << "First element of the element is at index " << res << endl;
    return 0;
}