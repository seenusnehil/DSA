#include<bits/stdc++.h>
using namespace std;

// function to return whether this rotated/non-rotated array is sorted or not
bool sortedAndRotated(int arr[], int n) {

    int count = 0;
    for(int i=0;i<n;i++) {

        // If the current element is greater than the next element, 
        // it is breaking the ascending order rule
        if(arr[i] > arr[i+1]) count++;
    }

    // Now if the last element is greater than the first element
    // We do this to eliminate the arrays which were never sorted 
    // as their count will become greater than 1
    if(arr[n-1] > arr[0]) count++;

    // will return true for the arrays which were only sorted, else count > 2
    return count <= 1;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<sortedAndRotated(arr, n);

    return 0;
}