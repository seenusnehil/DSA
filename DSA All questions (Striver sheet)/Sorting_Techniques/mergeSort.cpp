#include<bits/stdc++.h>
using namespace std;

// Merge Sort: In this algorithm, we simply divide the array and merge in them together in a sorted fashion
// We keep dividing the array in halves until we reach the minimum elements (i.e. n=1)  and then merge them together

// function to merge the sorted arrays
void merge(int arr[], int low, int mid, int high) {

    // creating a temporry vector to hold the sorted array
    vector<int> temp;

    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high) {

        // if the element on the left side is smaller, inserting it to the array
        // else we'll insert the one from the right side of the array
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }

        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Now, if the right side of the array exhausts (reaches beyond high)
    // We'll insert all the remaining elements of left side array, as they're already sorted
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Now, if the left side of the array exhausts (reaches beyond mid)
    // We'll insert all the remaining elements of right side array, as they're already sorted
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // just copying the temp vector into the original array
    for(int i=low;i<=high;i++) {
        arr[i] = temp[i-low];
    }

}

// function to perform the merge sort algorithm
void mergeSort(int arr[], int low, int high) {

    // When the array contains only one element, where low and high becomes equal
    // We'll return, so as to combine with the other side of the array
    if(low >= high) return;

    int mid = (low+high)/2;  // calculating the middle element, so that we can divide the array in half

    mergeSort(arr, low, mid);  // going till the last element on the left , until n = 1
    mergeSort(arr, mid+1, high);  // going to the last element on the right, until n = 1

    // Once both the sides are traversed till last, we'll merge them into a single array in sorted order
    merge(arr, low, mid, high);
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    // Printing the array after sorting using merge sort
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}