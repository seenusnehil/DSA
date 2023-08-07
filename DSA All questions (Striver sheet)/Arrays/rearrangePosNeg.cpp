#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(int arr[], int n) {

    vector<int> pos, neg;
    for(int i=0;i<n;i++) {
        if(arr[i] < 0) neg.push_back(arr[i]);
        else pos.push_back(arr[i]);
    }

    vector<int> temp;
    for(int i=0;i<n/2;i++) {
        temp.push_back(pos[i]);
        temp.push_back(neg[i]);
    }

    for(auto it: temp) cout<<it<<" ";
}

void rearrangeArray2(int arr[], int n) {

    int posIdx=0, negIdx=1;

    vector<int> ans(n, 0);
    for(int i=0;i<n;i++) {
        if(arr[i] > 0) {
            ans[posIdx] = arr[i];
            posIdx += 2;
        }
        else {
            ans[negIdx] = arr[i];
            negIdx += 2;
        }
    }

    for(auto it: ans) cout<<it<<" ";
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    rearrangeArray2(arr, n);
    
    return 0;
}