#include<bits/stdc++.h>
using namespace std;

// Function to return the element that appears more than n/2 times in the array
int majorityElement(int arr[], int n) {

    // Using the approach of hashing, hence using a map data structure
    map<int, int> freq;

    for(int i=0;i<n;i++) {
        freq[arr[i]]++;  // storing the frequencies of each element in the array
    }

    // returning the element, who's frequency is more than n/2
    for(auto it: freq) {
        if(it.second > (n/2)) return it.first;
    }

    return -1;
}

// Optimal Approach: Moore's Voting Algorithm
/*
The algorithm runs with two variables, count and a variable to store the element
and they follow three major rules;
    1. if the count is 0, increment count to 1, and store that current element
    2. if the el == current element, increment the count variable
    3. if the el != current element, decrement the count variable

And doing this by the end, you'll be having the element that appears > n/2 times in the array
At last, just to confirm your answer, run a loop through the array, 
count the occurences for that particular element, and check if its > n/2
if, that's your answer, else, no such element exists
*/
int majorityElementMVA(int arr[], int n) {

    // creating two variables, 
    // el - to store the element that we currently see
    // count - to store the count whenever we the same element, initialize it by 0
    int cnt=0, el;
    for(int i=0;i<n;i++) {

        // whenever the cnt variable turns out to be 0, 
        // - we store the element in our el variable
        // - we make the count 1 or increment it by 1
        if(cnt == 0) {
            el = arr[i];
            cnt=1;
        }

        // Whenever we see the element again, and count has not bee 0 yet, we increament the count
        else if(el == arr[i]) cnt++;
        else cnt--;  // if different elements, decrement the count variable
    }
    // By now, we've captured some element (mostly the answer)
    
    // But just to confirm, we run the loop again, and count the occurences of that element in the array
    // And if it is > n/2, it is indeed the answer
    int cnt1=0;
    for(int i=0;i<n;i++) {
        if(arr[i] == el) cnt1++;
    }

    if(cnt1 > n/2) return el;
    return -1;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<majorityElement(arr, n)<<endl;

    cout<<majorityElementMVA(arr, n);

    return 0;
}