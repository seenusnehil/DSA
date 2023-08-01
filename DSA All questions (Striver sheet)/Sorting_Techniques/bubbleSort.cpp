#include<bits/stdc++.h>
using namespace std;

// Bubble Sort: At every step, check if the elements are placed in the wrong order, if, then simply swap them with
// E.g. 45, 12 - are in wrong order, so swap them -> 12, 45, and continue this with every element to get the sorted array at the end

// To perform the bubble sorting technique on the given array
void bubbleSort(int arr[], int p, int n) {
    
    int i=0;
    for(i=0;i<p;i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);  // swapping, when the current element is greater than the number following it
        }
    }

    // sorting the last value of i, so that we can reduce the array size in the next iteration
    p = i;
    if(p == 0) {  // if the last index reaches to the first position, we'll end the iterations
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        return;
    }

    // recursive call to the function, with size 1 short each time
    bubbleSort(arr, p-1, n); 
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