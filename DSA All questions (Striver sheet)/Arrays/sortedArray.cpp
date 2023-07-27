#include<bits/stdc++.h>
using namespace std;

// function to return whether the array is sorted or not
bool sortedArray(int arr[], int n) {
    
    bool flag = true;  // variable to know the status, whether the array is sorted or not
    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            // whenever the current element is greater than the next element, 
            // it breaks the rule for being a sorted array, hence flag is turned as false, and returned
            flag = false;  
            break;
        }
    }

    // if the array is sorted true is returned, else false
    return flag;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<sortedArray(arr, n);

    return 0;
}