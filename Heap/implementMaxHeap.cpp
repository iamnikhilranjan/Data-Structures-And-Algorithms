#include <bits/stdc++.h>
using namespace std;

class Solution{
    private:
       vector<int> arr;
       int count;

       void heapifyUp(int ind) {
           int parentInd = (ind - 1)/2;

           if(ind > 0 && arr[ind] > arr[parentInd]) {
            swap(arr[ind], arr[parentInd]);
            heapifyUp(parentInd);
           }

           return;
       }

       void heapifyDown(int ind) {
        int n = arr.size();

        int largestInd = ind;

        int leftChildInd = 2*ind + 1, rightChildInd = 2*ind + 2;
        

        if(leftChildInd < n && arr[leftChildInd] > arr[largestInd]) 
            largestInd = leftChildInd;


        if(rightChildInd < n && arr[rightChildInd] > arr[largestInd]) 
            largestInd = rightChildInd;

        if(largestInd != ind) {
            swap(arr[largestInd], arr[ind]);
            heapifyDown(largestInd);
        }    
        return;
       }

    public:
        void initializeHeap(){
           arr.clear();
           count = 0;
        }

        void insert(int key){
           arr.push_back(key);
           heapifyUp(count);
           count = count + 1;
           return; 
        }

        void changeKey(int index, int new_val){
            if(arr[index] < new_val) {
                arr[index] = new_val;
                heapifyUp(index);
            }

            else {
                arr[index] = new_val;
                heapifyDown(index);
            }
            return;
        }

        void extractMax(){
            int ele = arr[0];

            swap(arr[0], arr[count-1]);

            arr.pop_back();
            count = count - 1;

            heapifyDown(0);
        }

        bool isEmpty(){
            return (count == 0);
        }

        int getMax(){
            return arr[0];
        }

        int heapSize(){
            return count;
        }
};