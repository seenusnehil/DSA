#include<bits/stdc++.h>
using namespace std;

// Function to return the highest frequency and the lowest frency element in the array
void highestLowestFrequency(int arr[], int n) {

    // using map to store the elements and its corresponding no. of occurences
    // and then finding the max and min frequency out of it
    int maxNum=INT_MIN, minNum=INT_MAX;
    map<int, int> hash;
    for(int i=0;i<n;i++) {
        hash[arr[i]]++;
    }

    // finding the max, min from the hashmap
    for(auto it: hash) {
        if(it.second < minNum) minNum = it.second;
        if(it.second > maxNum) maxNum = it.second;
    }

    // printing the number
    cout<<minNum<<" "<<maxNum;
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    highestLowestFrequency(arr, n);

    return 0;

}