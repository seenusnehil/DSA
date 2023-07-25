#include<bits/stdc++.h>
using namespace std;

// Approach: Loop once, and store the max and min element from the array 
// Then, loop again through the array, and check for minimum element again, but put an additional condition, 
// that this element shouldn't be the previous min/max, and hence, you'll get the second smallest and largest number from the array

void secondLargestSmallest(int arr[], int n) {

    // declaring variables for storing the max and sexond max element
    int maxi=INT_MIN, secondMax=INT_MIN;
    int mini=INT_MAX, secondMin=INT_MAX;

    // looping to store the max and the min element in the array
    for(int i=0;i<n;i++) {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    // looping for finding the second largest and smallest element in the array
    for(int i=0;i<n;i++) {
        // checking if the current element is smaller than the variable and 
        // it should not be the previous smallest number
        if(arr[i] < secondMin && arr[i] != mini) {  
            secondMin = arr[i];
        }

        // checking if the current element is greater than the variable and 
        // it should not be the previous largest number
        if(arr[i] > secondMax && arr[i] != maxi) {
            secondMax = arr[i];
        }
    }

    cout<<secondMin<<" "<<secondMax<<endl;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    secondLargestSmallest(arr, n);

    return 0;
}