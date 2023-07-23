#include<bits/stdc++.h>
using namespace std;

// Insertion Sort: Find the element in the given array which is placed wrongly, and put it in its right position, by simply swapping element
// until it can't be swapped anymore

// function to perform selection sort
void selectionSort(int arr[], int n) {

    // looping through the entire array
    for(int i=0;i<n;i++) {
        int j = i;  //putting j with i, so that we can compare element at jth position and element at (j-1)th position everytime
        while(j>0 and arr[j] < arr[j-1]) {
            swap(arr[j], arr[j-1]);  // swapping the required element

            // this is done, so that we can compare elements until the while condition 
            // turns out to be false (until jth element is smaller than the (j-1)th element)
            j--;  
        }
    }

    // printing the array
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

    // calling the function to perform selection sort
    selectionSort(arr, n);
}