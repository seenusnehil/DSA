#include<bits/stdc++.h>
using namespace std;

// Bubble Sort: At every step, check if the elements are placed in the wrong order, if, then simply swap them
// E.g. 45, 12 - are in wrong order, so swap them -> 12, 45, and continue this with every element to get the sorted array at the end

// To perform the bubble sorting technique on the given array
void bubbleSort(int arr[], int p, int n) {
    
    // The outer loop helps in counting whether we've reached the last element or not
    // it runs till the last element in the array
    for(int i=0;i<n;i++) {
        
        // till n-2th term j will run, as it compares the next element with the current element
        // so to run without any error it had to run till n-2th term so that it can compare the last element with the current element
        // and then do not got out of bound of the array size
        for(int j=0;j<=n-1;j++) {
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    } 

    // printing te array
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    
    // calling the bubbleSort function, with array, its size(changeable), its size that's not gonna change on recursion
    bubbleSort(arr, n, n);
    return 0;
}