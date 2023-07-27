#include<bits/stdc++.h>
using namespace std;

// function to return whether this rotated/non-rotated array is sorted or not
int removeDuplicateSorted(vector<int> &nums, int n) {

    for(int i=1;i<n;i++) {
        if(nums[i] == nums[i-1]) {
            nums.erase(nums.begin()+i);
            n = nums.size();
        }
    }

    return nums.size();
}

int main() {

    int n;
    cin>>n;

    int a;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        cin>>a;
        arr.emplace_back(a);
    }

    cout<<removeDuplicateSorted(arr, n);

    return 0;
}