#include<bits/stdc++.h>
using namespace std;

// Brute Force:
// We know that the first row becomes the last column in the resultant matrix
// And with every iteration, row index increases(+1) and column index decreases(-1)
void rotateMatrixBy90(vector<vector<int>> &arr, int m, int n) {

    vector<vector<int>> temp;  // creating a temp matrix to store the resultant matrix
    temp.assign(arr.begin(), arr.end());

    // looping through the matrix and 
    // storing the first row as the last column of temp matrix
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            temp[j][m-i-1] = arr[i][j];  // logical entity
        }
    }

    // printing the matrix
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Optimal Approach:
// The main observation for this optimal approach is that
// we first transpose the matrix, and then reverse the matrix row wise
void rotateMatrixBy90Two(vector<vector<int>> &arr, int m, int n) {

    // looping through the matrix and 
    // swapping the positions of the elements which will change 
    // the position in the resultant matrix (after 90 degree rotation)
    for (int i=0; i<m; i++) {
        for (int j=0; j<i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Now, simply reverse the matrix row wise to get the resultant matrix
    for(int i=0;i<m;i++) {
        reverse(arr[i].begin(), arr[i].end());
    }

    // printing the matrix
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
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

    rotateMatrixBy90Two(arr, m, n);

    return 0;
}