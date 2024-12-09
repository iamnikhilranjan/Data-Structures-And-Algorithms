// How many times a circularly sorted array A is rotated
#include <bits/stdc++.h>
using namespace std;
int FindRotationCount(int A[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (A[low] <= A[high])
            return low;
        int mid = low + (high - low) / 2;
        int next = (mid + 1) % n, prev = (mid + n - 1) % n;
        if (A[mid] <= A[next] && A[mid] <= A[prev])
            return mid;
        else if (A[mid] <= A[high])
            high = mid - 1;
        else if (A[mid] >= A[low])
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int A[] = {15, 22, 23, 28, 31, 38, 5, 6, 8, 10, 12};
    int count = FindRotationCount(A, 11);
    cout << "The array is rotated " << count << " times.";
    return 0;
}