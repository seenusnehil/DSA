#include<bits/stdc++.h>
using namespace std;

// Selection Sort: Here, we simply selects the smallest array element, and swap it with the first element in the unsorted array

// function to find the minimum element
int min(int arr[], int n, int p) {

    int num = INT_MAX;
    int idx;

    for(int i=p;i<n;i++) {
        if(arr[i] <= num) {
            num = arr[i]; // this one stores the minimum element
            idx = i; // this one stores the index of the smallest element
        }
    }

    // index of the smallest element is returned
    return idx;
}

// function to perform the selection sort
void selectionSort(int arr[], int n) {

    int mini = 0;
    for(int i=0;i<n-1;i++) {
        int temp = i;
        mini = min(arr, n, temp);
        swap(arr[i], arr[mini]);
    }

    // displaying the array(sorted)
    for(int i=0;i<n;i++) {
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

    int pointer = 0;

    // cout<<min(arr, n);

   selectionSort(arr, n);
}