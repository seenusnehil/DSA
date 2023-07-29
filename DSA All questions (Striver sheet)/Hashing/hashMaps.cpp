#include<bits/stdc++.h>
using namespace std;

void countFrequency(int arr[], int n) {

    // creation of map data structure (aka hashmap in Java)
    map<int, int> freq;

    for(int i=0;i<n;i++) {
        // updating the corresponding value for each element in the map
        // this indicates the frequency of each element in the given array
        // whenever it finds an element, it does the following operations
        // map[element] -> value++ 
        // element is map.first, and value is map.second
        freq[arr[i]]++;  
    }

    // printing the map elements
    // format: element -> frequency
    for(auto it: freq) {
        cout<<it.first<<" -> "<<it.second<<endl;
    }
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    countFrequency(arr, n);

    return 0;
}