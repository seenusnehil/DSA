#include<bits/stdc++.h>
using namespace std;

// Brute Force:
void rotateMatrixBy90(vector<vector<int>> &arr, int m, int n) {

    vector<vector<int>> temp;
    temp.assign(arr.begin(), arr.end());

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if(i%(m-1) != 0) {
                temp[i][j] = arr[(i+2)%(m-1)][j];
            }
            else temp[i][j] = arr[i+2][j];
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
        
    int m, n;
    cin>>m>>n;

    vector<vector<int>> arr;

    // method to take input in 2D vector (matrix)
    for(int i=0;i<m;i++) {

        vector<int> arr1;
        for(int j=0;j<n;j++) {
            int a;
            cin>>a;
            arr1.push_back(a);
        }
        arr.push_back(arr1);
    }

    cout<<endl;

    rotateMatrixBy90(arr, m, n);

    return 0;
}