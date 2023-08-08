#include<bits/stdc++.h>
using namespace std;

// fucntion to return the elements which are greater than their next element
void leaderElement(int arr[], int n) {

    // loop through the array, to find the leader element
    for(int i=0;i<n;i++) {
        if(i == n-1) cout<<arr[i];  // last element is always the leader

        // check if the current element > its next element
        // if, it is a leader element, so print it, else leave it
        if(arr[i] > arr[i+1]) cout<<arr[i]<<" ";  
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    leaderElement(arr, n);

    return 0;
}