#include<bits/stdc++.h>
using namespace std;

// function to print the array
void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

// function to reverse the given array
void reverseArray(int n, int arr[], int s, int e) {

    // If the array is of even length
    if(n % 2 == 0) {
        if(s > e) return printArray(arr, n);

        // swap the elements
        swap(arr[s], arr[e]);
        reverseArray(n, arr, s+1, e-1);
    }

    // If the array is of odd length
    else {
        if(s == e) return printArray(arr, n);

        swap(arr[s], arr[e]);
        reverseArray(n, arr, s+1, e-1);
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0])- 1;

    reverseArray(n, arr, s, e);

    return 0;
}