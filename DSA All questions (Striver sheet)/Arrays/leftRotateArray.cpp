#include<bits/stdc++.h>
using namespace std;

// Brute force approach: create a temp array, and store the values of the next index to the current index
void leftRotateby1_One(int arr[], int n) {

    //  creating new temp array to store the array in the rotated fashion
    int newArr[n];
    for(int i=0;i<n;i++) {
        newArr[i] = arr[(i+1)%n];
    }

    for(int i=0;i<n;i++) {
        cout<<newArr[i]<<" ";
    }
}

// Optimised approach: Do the same as we did in brute force, but do not create an extra array, 
// just to avoid losing the first element of the array, store that element in a temp variable, and at the end of
// loop simply store that element at the last index
void leftRotateby1_Two(int arr[], int n) {

    int temp = arr[0];  // storing arr[0] in a temp variable so as to avoid losing it while shifting the elements
    for(int i=0;i<n;i++) {
        arr[i] = arr[(i+1)%n];
    }

    arr[n-1] = temp;
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

void leftRotatebyK(int arr[], int n, int k) {

    int temp[n];
    for(int i=0;i<n;i++) {
        temp[i] = arr[(i+k)%n];
    }

    for(int i=0;i<n;i++) {
        cout<<temp[i]<<" ";
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int k;
    cin>>k;
    //leftRotateby1(arr, n);
    
    leftRotatebyK(arr, n, k);
    
    return 0;
}