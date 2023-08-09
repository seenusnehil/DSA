#include<bits/stdc++.h>
using namespace std;

// function to return the longest consecutive sequence from the given array
// Eg: arr = [100, 4, 200, 1, 3, 2], so here the longest consecutive sequennce is 1, 2, 3, 4
// Hence we need to return its count i.e. 4 in this case
int longestConsecutiveSequence(int arr[], int n) {

    // variables to store count and the maxCount till now respectively
    int count=1, maxCount=1;

    sort(arr, arr+n);  // sorting the array to make the counting easy (Takes O(NlogN) time)

    // looping through the array to find the length of the sequence
    for(int i=0;i<n;i++) {
        // if the next number is the next consecutive number of the current number, increment the length
        // And continuesly keep storing the max count, to avoid any breakage in between
        if((arr[i]+1) == arr[i+1]) {
            count++;
            maxCount = max(maxCount, count);  // storing the max length till now
        }

        else if(arr[i] == arr[i+1]) continue; // if the element repeats, just skip over it

        else count=1; // if the consecutive order breaks, reinitialize the count variable to 1
    }

    // return the max count
    return maxCount;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<longestConsecutiveSequence(arr, n);

    return 0;
}