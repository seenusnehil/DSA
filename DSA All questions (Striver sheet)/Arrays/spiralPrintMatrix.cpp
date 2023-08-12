#include<bits/stdc++.h>
using namespace std;

// function to print the matrix in the spiral order, 
// as if we are peeling something layer by layer
void spiralPrintMatrix(vector<vector<int>> &arr, int m, int n) {

    /* Initializing four important pointers
        - top is to hold the [0][0] index, and will move from 0 to m-1
        - bottom is to hold the [m-1][n-1] index, and will move from m-1 to 0
        - left is to hold the [m-1][0] index, and will move from 0 to n-1
        - right is to hold the [0][n-1] index, and will move from n-1 to 0
    all these indexes are important as after every print, one of these index gets updated as per priral order
    */
    int top=0, right=n-1, bottom=m-1, left=0;

    // We'll loop until left pointer surpasses right, and top pointer surpasses the bottom pointer
    while(top <= bottom and left <= right) {

        // starting from left to right, print the first row
        for(int i=left;i<=right;i++) {
            cout<<arr[top][i]<<" ";
        }

        top++; // incrementing top, as in the next print, we need to start from the next row (in spiral order)

        // starting from top till bottom, print the last column
        for(int i=top;i<=bottom;i++) {
            cout<<arr[i][right]<<" ";
        }

        right--;  // as in the next print, we've to start from 1 column lesser than the last

        // if the top is still less than the bottom, we'll proceed
        // We need to check this, as we're continuesly incrementing and decrementing 
        // top and bottom respectively
        if(top <= bottom) {
            for(int i=right;i>=left;i--) {
                cout<<arr[bottom][i]<<" ";
            }

            bottom--;  // as in the next turn, we need to print from a level above the base level
        }

        // if the left is still less than the right pointer
        // We need to check this, as we're continuesly incrementing and decrementing 
        // left and right respectively
        if(left <= right) {
            for(int i=bottom;i>=top;i--) {
                cout<<arr[i][left]<<" ";
            }

            left++;  // as we will print from a layer ahead of the last column
        }

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

    spiralPrintMatrix(arr, m, n);

    return 0;
}