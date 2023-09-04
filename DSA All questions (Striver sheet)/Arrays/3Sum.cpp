#include<bits/stdc++.h>
using namespace std;

// Brute force approach to get the triplets with sum 0
vector<vector<int>> sumTriplets(vector<int> arr, int n) {

    set<vector<int>> st;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                if(arr[i]+arr[j]+arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Better solution to get the triplet with sum 0
vector<vector<int>> sumTriplets2(vector<int> arr, int n) {

    set<vector<int>> st;
    for(int i=0;i<n;i++) {
        set<int> hashSet;
        for(int j=i+1;j<n;j++) {

            int third = -(arr[i]+arr[j]);
            if(hashSet.find(third) != hashSet.end()) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashSet.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {

    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = sumTriplets2(arr, n);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;

    return 0;
}