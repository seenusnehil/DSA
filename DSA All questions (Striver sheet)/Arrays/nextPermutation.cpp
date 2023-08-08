#include<bits/stdc++.h>
using namespace std;

// Function to return the immediate next permuation for the given array
/*Approach:
To find the immediate next possible permutation with this approach is all about observations.
1. We have to find the breaking point
*/

void nextPermutation(vector<int> &arr, int n) {

    int idx = -1;  // To hold the break point

    // This loop is to find the break point, from where we need to find the next set of numbers
    // which can be permuted to find the immediate next permutation
    for(int i=n-2;i>=0;i--) {

        // At any point if the current element > its next element, 
        // we find a break point and store in the idx variable and break
        if(arr[i] < arr[i+1]) {
            idx = i;
            break;
        }
    }

    // if idx remains -1, it simply means that the given array 
    // is the last permutation in the table possible for the given set  of numbers
    // hence, simply reverse the array to get the next possible permutation i.e. the first permutation itself
    if(idx == -1) {
        reverse(arr.begin(), arr.end());
    }

    // Now looping from last index till idx+1, to find an element greater than element at idx, 
    // but the smallest among the remaining group, as that number would be the first candidate
    // for starting next possible number in permutation
    for(int i=n-1;i>idx;i--) {

        // whenever we find the numver greater than the number at idx, we swap them,
        // as array till that greater number from the end is already sorted in reverse order until the break point
        // so to get the immediate next permutation, we swap them
        if(arr[i] > arr[idx]) {
            swap(arr[i], arr[idx]);
            break;
        }
    }

    // Now, we have found the next permutation from the start till idx
    //  and the only remaining part id from idx + 1 to the end of the array
    //  So, to find the immediate next permutation, we simply need to reverse the remaining portion
    // from idx+1 till end of the array
    // And there after, we'll get our desired answer i.e. the immediate next permutation
    if(idx != -1) {
        reverse(arr.begin()+idx+1, arr.end());
    }

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int n;
    cin>>n;

    vector<int> arr;
    int a;
    for(int i=0;i<n;i++) {
        cin>>a;
        arr.push_back(a);
    }

    nextPermutation(arr, n);

    return 0;
}