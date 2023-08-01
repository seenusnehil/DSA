#include<bits/stdc++.h>
using namespace std;

// Very brute force approach: count the individual elements, and overwrite the elements
void sort012(int arr[], int n) {

    // Since we have only 3 numbers to keep a count of, we created 3 independent variable for 0, 1, 2
    // and over iterating the array, whenever we find the corrsponding element, we'll increament its counter
    int cnt0=0, cnt1=0, cnt2=0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }

    // from 0 till count of 0, we'll overwrite 0
    for(int i=0;i<cnt0;i++) arr[i] = 0;

    // after completing 0, from the next pos till count of 1, we'll overwrite 1
    for(int i=cnt0;i<cnt0+cnt1;i++) arr[i] = 1;

    //  fater we're done with 0, 1, from the next pos till last, we'll overwrite 2
    for(int i=cnt0+cnt1;i<n;i++) arr[i] = 2;
}

// Using the DUTCH NATIONAL FLAG algorithm to sort the given array of
/* The algorrithm consists 3 pointers (low, mid, high), and a set of rules on them:
    1. The hypothetical array is sorted from 0 to low-1 (contains 0 only).
    2. The array is sorted from low till mid-1 (contains 1 only).
    3. The array is sorted from high+1 till n-1 (contains 2 only).
    4. Now, the array elements between mid+1 till high, is unsorted, hence all the work is done in here

So, what work would be done is mentioned below:
    1. if arr[mid] == 0, swap(arr[mid], arr[low]) and then low++, mid++
    - reason: we know that will low-1, the array is sorted, and contains 0, 
        so we can easily move this 0 to that position, and to maintain the set rules, we increment low and mid

    2. if arr[mid] == 1, we do not need to do anything, as the array before this position is already sorted, 
    hence we do not need to do anything, simply do mid++

    3. if arr[mid] == 2, swap(arr[mid], arr[high]), and then simply do high--
    - reason: we know that from high+1 till n-1, the array is sorted and contains 2, 
        so if we insert another 2 just before high+1 i.e. on high, the array will still be sorted in that region, 
        hence we are well with the rules, and then decrement high by 1, so that element from high+1 till n-1 remains sorted

This algorithm sorts the given array in O(N) time, as we traversed the loop only once, 
and with constant space as we didn't create any new array to stor elements
*/ 
void sortDNF(int arr[], int n) {

    int low=0, mid=0, high=n-1;
    // Since the elements are unsorted only between mid and high, 
    // we'll run a loop between that segment only
    while(mid<=high) {

        // array is sorted till low-1, containing zeros(0)
        // hence simply swapping and putting it in the sorted order
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);

            // incrementing to get back on our work area (mid+1 to high-1)
            low++;
            mid++;
        }

        // everything is sorted, hence no need to swap, simply increament mid
        else if(arr[mid] == 1) mid++;

        // else the mid element is 2, we need to put it just before high, hence swap it with high
        // and reeduce high by 1, and continue the work
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // sort012(arr, n);

    sortDNF(arr, n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}