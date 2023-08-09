#include<bits/stdc++.h>
using namespace std;

// Function to return the no of subarrays with the given sum K
/*
Approach:
- Use the hashmap to store the sum, and its number of occurences in the array previously
- traverse the array, and keep updating its occurence in the hashmap
- In the end, simply return  the total count, the number of times subarrays occured there with sum K
*/
int subarraysWithSumK(int arr[], int n, int k) {

    // map to store the sum and its occurences in previous subarrays
    map<int, int> cntMap;

    // setting the initial value as 0, 1
    /*
    Reason:
    - when initially the sum = k (at the very first index), and we calculate the presum as presum = sum-k
    We get the answer as 0, but map doesn't contain 0, but their exists a subarray with this sum=k, which we
    are not able to map from, hence to avpid such problem, we include 0(sum) with its occurence as 1
    */
    cntMap[0] = 1;
    int count=0, sum=0;

    // looping over the array once
    for(int i=0;i<n;i++) {
        sum += arr[i];  // storing the sum

        // calculating preSum, to know whether their exists a subarrays 
        // with the given that preSum or not
        int preSum = sum - k;

        // if it exists, we increment the count by no. of its occurences in the previous subarrays
        // else the count remains same
        count += cntMap[preSum];  

        // adding the sum, and its occurence to the map
        // if the sum already existed, it will simply increment its count(no of occurences)
        cntMap[sum] += 1;  
    }

    // At the end, simply return the count
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
