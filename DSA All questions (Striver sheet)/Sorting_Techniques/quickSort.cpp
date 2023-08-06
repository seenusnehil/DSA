#include<bits/stdc++.h>
using namespace std;

// function to return the partition index to divide the array into two halves (left and right)
int calcPartition(int arr[], int low, int high) {

    // setting the initial positions for the variables
    int pivot = arr[low];
    int i = low;
    int j = high;

    // as long as j/i doesn't cross each other, we'll loop through the array
    while(i < j) {

        // if the element from left is greater than the pivot element,
        // we'll stop the i pointer
        while(arr[i]<=pivot && i<high) {
            i++;
        } 

        // if the element from the right is smaller than the pivot,
        // we'll stop the j pointer
        while(arr[j]>pivot && j>=low+1) {
            j--;
        } 

        // Now, we'll simply swap the i, jth elements with each other
        // this is just to bring all the smaller elements to the left side
        // and all the greater elements to the right side
        if(i<j) swap(arr[i], arr[j]);
    }

    // once j/i crosses each other, we'll swap the element at ith position with the pivot element
    // and with this we'll get the array with left side with smaller elements than the pivot
    // and right side with the elements greater than the pivot
    swap(arr[low], arr[j]);
    
    return j;  // return the pivot index to continue the process
}

// function to sort the given array using quick sort method
void quickSort(int arr[], int low, int high) {

    // if there's only a single element in the array, no need to procedd, 
    // simply return from there
    if(low >= high) return; 

    // calculating the partition point, 
    // from where we can divide the array into its left and right half respectively
    int partition = calcPartition(arr, low, high); 

    quickSort(arr, low, partition-1);  // calling quicksort for the left half
    quickSort(arr, partition+1, high); // calling quicksort for the right half

    
}



int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }


    return 0;
}