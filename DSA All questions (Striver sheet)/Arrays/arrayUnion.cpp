#include<bits/stdc++.h>
using namespace std;

// union of two arrays (common elements between both the arrays)
void arrayUnion(vector<int> arr1, vector<int> arr2, int n, int m) {

    // concatenating both the arrays
    move(arr2.begin(), arr2.end(), back_inserter(arr1));

    // sorting the arrays
    sort(arr1.begin(), arr1.end());

    int range = arr1.size();
    vector<int> temp;  // array to store the union of both the arrays
    int prev = INT_MIN;  // variable to hold the just previous element

    // looping to eliminate the repeating elements and store only common elements in the temp array
    for(int i=0;i<range;i++) {
        if(arr1[i] != prev) {
            temp.push_back(arr1[i]);
            prev = arr1[i];
        }
        else {
            prev = arr1[i];
        }
    }

    for(auto it: temp) cout<<it<<" ";
}

int main() {

    int n;
    int m;
    cin>>n;

    vector<int> arr1, arr2;

    int a, b;
    for(int i=0;i<n;i++) {
        cin>>a;
        arr1.push_back(a);
    }

    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>b;
        arr2.push_back(b);
    }

    arrayUnion(arr1, arr2, n, m);

    return 0;
}