#include<bits/stdc++.h>
using namespace std;

// function to get the maximum element in the array
int largestElement(int arr[], int n) {

    int maxi = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];  // every time the maxi gets compared, and updated to a newer value (if its the maximum than the previous ones)
        }
    }

    return maxi;
}

int main() {
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<largestElement(arr, n);

    return 0;
}