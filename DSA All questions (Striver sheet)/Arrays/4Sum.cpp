#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sumQuadraples(vector<int> arr, int n, int target) {

    set<vector<int>> st;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                for(int l=k+1;l<n;l++) {
                    if(arr[i]+arr[j]+arr[k]+arr[l] == target) {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

vector<vector<int>> sumQuadraples2(vector<int> arr, int n, int target) {

    set<vector<int>> st;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {

            set<int> hashSet;
            for(int k=j+1;k<n;k++) {
                int fourth = target - (arr[i]+arr[j]+arr[k]);

                if(hashSet.find(fourth) != hashSet.end()) {
                    vector<int> temp = {arr[i], arr[j], arr[k], fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashSet.insert(arr[k]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

vector<vector<int>> sumQuadraples(vector<int> arr, int n, int target) {

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {

            if(arr[i] == arr)

            int k = j+1;
            int l = n-1;

            while(k < l) {

                int sum = arr[i]+arr[j]+arr[k]+arr[l];

                if(sum == target)
            }
        }
    }
}

int main() {

    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int n = arr.size();

    int k = 0;
    vector<vector<int>> ans = sumQuadraples2(arr, n, k);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}