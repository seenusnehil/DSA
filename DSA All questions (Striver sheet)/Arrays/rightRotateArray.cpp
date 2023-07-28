#include<bits/dstdc++.h>
using namespace std;

void rightRotateArray(int arr[], int n, int k) {
    int temp[n];
    for(int i=0;i<n;i++) {
        temp[i] = arr[(i-k)%n];
    }

    for(int i=0;i<n;i++) {
        cout<<temp[i]<<" ";
    }
    
}

int main() {

    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    rightRotateArray(arr, n, k);
    return 0;
}