#include<bits/stdc++.h>
using namespace std;

int maxConsecutive1s(int arr[], int n) {

    int count = 0, maxCnt = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 1) {
            count++;  // counting the no. of ones
        }
        else {
            // whenever 0 appears (non-1 element), re-initialize count
            count = 0;
        }

        maxCnt = max(maxCnt, count);  // storing the max length of consecutive ones till now
    }

    return maxCnt;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<maxConsecutive1s(arr, n);

    return 0;
}