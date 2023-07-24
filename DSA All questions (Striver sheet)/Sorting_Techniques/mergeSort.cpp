#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {

    vector<int> temp;

    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.emplace_back(arr[left]);
            left++;
        }

        else {
            temp.emplace_back(arr[right]);
        }
    }

    while(left <= mid) {
        temp.emplace_back(arr[left]);
    }

    while(right <= high) {
        temp.emplace_back(arr[right]);
    }

    for(int i=low;i<=high;i++) {
        arr[i] = temp[i-low];
    }

}

void mergeSort(int arr[], int low, int high) {

    int mid = (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);

    merge(arr, low, mid, high);

    for(int i=low;i<=high;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    return 0;
}