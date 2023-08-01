#include<bits/stdc++.h>
using namespace std;


vector<int> twoSumProblem(int arr[], int n, int target) {

    // Method 1: Using 2 loops - Brute force
    // for(int i=0;i<n;i++) {
    //     for(int j=i+1;j<n;j++) {
    //         if(arr[i] + arr[j] == target) {
    //             cout<<i<<" "<<j;
    //             break;
    //         }
    //     }
    // }

    // Method 2: Hashing, store the current number, 
    // check if the remaining part of target (target - num) is present in the map or not
    // if not, store that element in the map with its index, 
    // if found, i.e. (map[target-num] found in the map), returnn the indexes

    map<int, int> twoSum;
    for(int i=0;i<n;i++) {
        int num = arr[i];
        int rem = target-num;  // calculating the remaining part of the target sum
        if(twoSum.find(rem) != twoSum.end()) {
            return {twoSum[rem], i};
        }

        twoSum[num] = i;
    }

    return {-1, -1};
}


int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    vector<int> res = twoSumProblem(arr, n, target);
    for(auto it: res) {
        cout<<it<<" ";
    }

    return 0;
}