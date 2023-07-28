#include<bits/stdc++.h>
using namespace std;

// Brute force: 
void allZerostoEnd(vector<int> arr, int n) {

    int cnt = 0;
    vector<int> temp;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) cnt++;

        else {
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<cnt;i++) {
        temp.push_back(0);
    }

    for(int i=0;i<n;i++) {
        cout<<temp[i]<<" ";
    }
}

void allZerosToEnd2(vector<int> arr, int n) {

    int j;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    for(int i=j+1;i<n;i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cin>>n;

    int a;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        cin>>a;
        arr.push_back(a);
    }

    // allZerostoEnd(arr, n);
    allZerosToEnd2(arr, n);
    
}