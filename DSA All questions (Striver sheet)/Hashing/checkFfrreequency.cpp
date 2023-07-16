#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // pre computation
    int hash[100] = {0};
    for(int i=0;i<n;i++) {
        hash[arr[i]]++;
    }

    int e;
    cin>>e;

    int freqArr[e];
    for(int i=0;i<n;i++) {
        cin>>freqArr[i];
    }

    // fetching the values from the array
    for(int i=0;i<100;i++) {
        cout<<hash[freqArr[i]]<<" ";
    }

    return 0;
}