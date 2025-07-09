#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void heapifyDown(vector<int> &nums, int ind) {
        int largest = ind;
        int left = 2*ind + 1, right = 2*ind + 2;

        if(left < nums.size() && nums[left] > nums[largest]) {
            largest = left;
        }
        
        if(right < nums.size() && nums[right] > nums[largest]) {
            largest = right;
        }

        if(largest != ind) {
            swap(nums[ind], nums[largest]);
            heapifyDown(nums, largest);
        }

        return;
    }    
public:
    vector<int> minToMaxHeap(vector<int> nums) {
        int n = nums.size();
        for(int i = n/2 - 1 ; i >= 0 ; i--) {
            heapifyDown(nums, i);
        }
        return nums;
    }
};