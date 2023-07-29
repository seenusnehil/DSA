#include<bits/stdc++.h>
using namespace std;

// Approach 1: using 2 loops
// Time complexity: O(N^2)
int maxLengthSumK(int arr[], int n, int k) {

    int length=0;  // to store the longest length of sum k
    for(int i=0;i<n;i++) {

        int sum=0;
        for(int j=i;j<n;j++) {

            // adding the elements until we reach the sum k
            sum += arr[j];

            // if the sum is equal to the desired result k
            // We'll store the max length till now
            if(sum == k) {
                length = max(length, j-i+1);
            } 
        }
    }

    return length;
}

// Approach 2: Using hashmaps (hashing)
// Time complexity: O(N) + O(N)
int longestSubarrayWithSumK(int arr[], int n, int k) {

    int sum=0, maxLen=0;

    // using a hashmap to store all the sums and the index of that sum
    // this will help us identify that at what point we had a particular sum
    map<int, int> prefixSum;
    for(int i=0;i<n;i++) {
        sum += arr[i];  // calculating sum

        if(sum == k) {
            // if the sum == k, storing the length of it, only if it is greater than the maxLen
            maxLen = max(maxLen, i+1);  
        }

        // Here starts the brain-storming
        // Here we calculate this(rem) to check that, if the required sum is k
        // then, is there any point where we had a sum == sum-k, and this is important
        // as we can find whether the current sum == k or not
        int rem = sum-k;
        if(prefixSum.find(rem) != prefixSum.end()) {  // And if that rem exists in the hashmap, we'll go inside
            
            // calculating the length as i(current index - the index where rem is stored
            //  this will give us the subarray that holds the sum as k from rem pos to current pos
            int len = i - prefixSum[rem];

            // And calculating that length, just check is it the longest subarray or not, if,
            // store it in maxLen, else leave
            maxLen = max(maxLen, len);
        }

        // storing the sum and its corrspondinf index where we found that sum
        prefixSum[sum] = i;
    }

    return maxLen;
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

    // cout<<maxLengthSumK(arr, n, k);
    cout<<longestSubarrayWithSumK(arr, n, k);

    return 0;
}