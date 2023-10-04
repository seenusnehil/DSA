#include<bits/stdc++.h>
using namespace std;

// Function to return the subarray with XOR K
int subarraysWithXorK(vector<int> arr, int n, int K) {

    int count = 0; // counter variable to keep a count of subarrays with XOR K
    for(int i=0;i<n;i++) {

        int xorr = 0; // variable for calculating XOR
        for(int j=i;j<n;j++) {

            // If the XOR of the current subarray id equal to the given XOR
            // we'll increment the count
            xorr = xorr ^ arr[j];
            if(xorr == K) {
                count++;
            }
        }
    }

    // finally after counting all the subarrays with XOR K, we return it
    return count;
}

int main() {

    vector<int> arr = {4, 2, 2, 6, 4};
    int n = arr.size();
    int K = 6;

    cout<<subarraysWithXorK(arr, n, K);

    return 0;
}