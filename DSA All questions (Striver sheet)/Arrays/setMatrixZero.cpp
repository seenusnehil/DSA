#include<bits/stdc++.h>
using namespace std;

// function to set all the row, column value to 0, 
// if any element in the corresponding row/column is 0
void setMatrixZero(vector<vector<int>> &arr, int m, int n) {

    // creating two arrays, one for making rows, and the other for columns
    // Objective behind these arrays is to keep a track of those 
    // rows n columns which we need to convert to zero
    int row[m] = {0};
    int col[n] = {0};

    // looping through the matrix and mapping all those rows and columns where we have a zero
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {

            // if the current element is 0,
            // mark its corrsponding row and column value to 1
            // mark those indexes in those arrays as 1
            if(arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Once we're done marking and keeping a track of all those 
    // indexs in rows and columns which we need to turn 0, then
    //  we simply need to map those indexes, and check if row[i] == 1 or col[j] == 1
    // just make that element 0, and hence, we end up completing the task
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(row[i] || col[j]) {
                arr[i][j] = 0;
            }
        }
    }

    // print the matrix
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout<<arr[i][j]<<" ";
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

    setMatrixZero(arr, m, n);

    return 0;
}