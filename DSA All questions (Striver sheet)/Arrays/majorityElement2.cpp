#include<bits/stdc++.h>
using namespace std;

void majorityElement2(int arr[], int n) {

    map<int, int> counter;
    for(int i=0;i<n;i++) {
        counter[arr[i]]++;
    }

    for(auto it: counter) {
        if(it.second > (n/3))
            cout<<it.first<<" ";
    }
}



int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    majorityElement2(arr, n);

    return 0;
}