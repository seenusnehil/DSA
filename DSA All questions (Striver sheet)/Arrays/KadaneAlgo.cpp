#include<bits/stdc++.h>
using namespace std;

int kadaneAlgo1(int arr[], int n) {

    int maxSum=INT_MIN, j;
    for(int i=0;i<n;i++) {
        int sum=0;
        for( j=i;j<n;j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
        if(sum == maxSum) cout<<i<<" "<<j;
    }

    return maxSum;
}

// Optimal solution: Using Kadane's algorithm for finding the subarray with maximum sum
// Approach
int kadaneAlgo2(int arr[], int n) {

    int sum=0, maxSum=INT_MIN;
    for(int i=0;i<n;i++) {
        sum += arr[i];

        if(sum < 0) sum=0;

        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main() {
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<kadaneAlgo2(arr, n);
}