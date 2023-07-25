#include<bits/stdc++.h>
using namespace std;

void secondLargestSmallest(int arr[], int n) {

    int maxi=INT_MIN, secondMax=INT_MIN;
    int mini=INT_MAX, secondMin=INT_MAX;

    for(int i=0;i<n;i++) {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    secondLargestSmallest(arr, n);

    return 0;
}