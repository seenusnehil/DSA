#include<bits/stdc++.h>
using namespace std;

// Brute force approach to find the largest subarray with sum 0
int largetZeroSubarray(vector<int> arr, int n) {

    int length = 1, maxLen = INT_MIN;
    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=i;j<n;j++) {
            sum += arr[j];
            if(sum == 0) {
                length = j-i+1;
            }
        }
        maxLen = max(maxLen, length);
    }

    return maxLen;
}

int largetZeroSubarray2(vector<int> arr, int n) {

    int sum = 0;
    int maxLen = INT_MIN;
    map<int, int> preSum;
    for(int i=0;i<n;i++) {

        sum += arr[i];
        if(sum == 0) {
            maxLen = i+1;
        }

        else {
            if(preSum.find(sum) != preSum.end()) {
                maxLen = max(maxLen, i - preSum[sum]);
            }

            else {
                preSum[sum] = i;
            }
        }
    }

    return maxLen;
}

int main() {
    vector<int> arr = {6, -2, 2, -8, 1, 7, 4, -10};
    int n = arr.size();

    cout<<largetZeroSubarray2(arr, n);

    return 0;
}