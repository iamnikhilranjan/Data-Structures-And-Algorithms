#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void heapifyDown(vector<int> &arr, int last, int ind) {
        int largestInd = ind; 

        int leftChildInd = 2*ind + 1, rightChildInd = 2*ind + 2;
        
        if(leftChildInd <= last && arr[leftChildInd] > arr[largestInd]) 
            largestInd = leftChildInd;

        if(rightChildInd <= last && arr[rightChildInd] > arr[largestInd]) 
            largestInd = rightChildInd;

        if(largestInd != ind) {
            swap(arr[largestInd] , arr[ind]);

            heapifyDown(arr, last, largestInd);
        }
        return; 
    }

    void buildMaxHeap(vector<int> &nums) {
        int n = nums.size();
        
        for(int i = n/2 - 1; i >= 0; i--) {
            heapifyDown(nums, n-1, i);
        }
        return;
    }

public:
    void heapSort(vector<int> &nums) {
        
        buildMaxHeap(nums);
        
        int last = nums.size() - 1; 
        
        while(last > 0) {
            swap(nums[0], nums[last]);
            
            if(last > 0) {
                heapifyDown(nums, last, 0);
            }
        }
        
        return;
    }
};