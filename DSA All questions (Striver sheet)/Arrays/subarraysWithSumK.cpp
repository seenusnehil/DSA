#include<bits/stdc++.h>
using namespace std;

int subarraysWithSumK(int arr[], int n, int k) {

    int count=0, sum=0;
    map<int, int> preSum;
    for(int i=0;i<n;i++) {

        sum += arr[i];
        if(sum == k) count++;

        int rem = sum - k;
        if(preSum.find(rem) != preSum.end()) {
            count++;
        }

        preSum[sum] = i;
    }

    return count;
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

    cout<<subarraysWithSumK(arr, n, k);

    return 0;
}
