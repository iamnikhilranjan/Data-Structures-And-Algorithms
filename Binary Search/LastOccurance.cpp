// To find the index of the last occurance of a number
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int x)
{
    int low = 0;
    int high = (n-1);
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (x == arr[mid])
        {
            result = mid;
            high = mid + 1;
        }
        else if (x < arr[mid])
        {
            high = mid-1;
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
    int arr[10] = {4, 5, 6, 5, 4, 5, 5, 4, 6, 3};
    sort(arr, arr + n);
    int x;
    cout << "Enter a number : ";
    cin >> x;
    int res = BinarySearch(arr, n, x);
    // if (res != -1)
    // {
    //     cout << "Last Occurance of the element is at index " << res << endl;
    // }
    // else
    //     cout << "The element does nit exist in the array !" << endl;
    cout << "First element of the element is at index " << res << endl;
    return 0;
}