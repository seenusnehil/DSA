#include<bits/stdc++.h>
using namespace std;

// function to return missing number from an order from 0 to n-1
int missingNumber(int arr[], int n) {

    int result;

    sort(arr, arr+n);  // sorting the array to make it easy to search
    int j=0;
    for(int i=0;i<n;i++) {
        // If any element is not present in the order, j would catch it, 
        // as j run serailly from 0 to until you find the missing element
        if(arr[i] != j) {
            result = j;  // stores in result and breaks the loop to return
            break;
        }
        j++;
    }

    return result;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<missingNumber(arr, n);
    return 0;
}