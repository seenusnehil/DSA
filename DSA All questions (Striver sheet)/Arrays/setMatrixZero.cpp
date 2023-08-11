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

    // Time complexity: O(n*m) +
}

// Optimal Approach: We try to optimize the space complexity in here
/*----------------------------------------------------------------
Approach:
    - In the previous method, we created two separate vectors for 
    keeping a check for row and column if they're 0 or not

    - Here instead of creating extra space we'll consider 
        row -> matrix[i][..] and,
        col -> matrix[..][j] to keep a track if that row/column contains zero or not
    But here, a problem arises as element at [0][0] is clashing for both the vectors
    So, to avoid this, we'll declare a separe variable named col0 to store the status for first row
    With this, we are considering row -> from 0 to m-1, and col -> from 1 to n-1 (col0 stores the status for the first row)

    - Now, traverse the matrix, and whenever we find arr[i][j] = 0, we mark respective row, col value 0
    as for row -> matrix[i][0] = 0, and 
    for col -> matrix[0][j] = 0 (if (j != 0), as we've ommited the element at position 0 for columns, 
    and have created a separate variable for it as col0), so if j == 0, we mark col0 = 0

    - Till now, we've marked all the corresponding values in first row, column as 0, when requried
    So, now we need to traverse the array from i=0 to i=m-1 and from j=1 to j=n-1 for the next operation
    
    - We're avoiding the first row and column as we've kept it for keeping the track of 0 elements, 
    so we'll operate on them in the end
    
    - Now, we'll check if the matrix[0][0] = 0, we convert all the corresponding first column values to 0
    i.e. matrix[0][j] = 0
    
    - Next, we'll check that whether col0 = 0, if, then we'll convert all the corresonding first row values to 0
    i.e. matrix[i][0] = 0
    
    - And in this way, we will convert all the values to 0, whose row/column contained 0 as an element initially
*/
void setMatrixZero2(vector<vector<int>> arr, int m, int n) {

    // setting the variable to map the first index of first column 
    // -> matrix[0][0] (for columns)
    int col0 = 1; 

    // Looping to find 0 elements, 
    // and mark the mappings in first row and column respectively
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(arr[i][j] == 0) {
                arr[i][0] = 0;  // marking rows

                // marking columns
                if(j != 0) arr[0][j] = 0;
                else col0 = 0;
            }
        }
    }

    // traversing to convert the element to 0, 
    // if its corresponding row/column contains 0 (that we've marked)
    for(int i=1;i<m;i++) {
        for(int j=1;j<n;j++) {
            if(arr[0][j] == 0 || arr[i][0] == 0) {
                arr[i][j] = 0;
            }
        }
    }

    // If the first row element is 0, then set all the column values in the first row to 0
    if(arr[0][0] == 0) {
        for(int j=0;j<n;j++) arr[0][j] = 0;
    }

    // if the col0 element is 0, set all the values in the first column to 0
    if(col0 == 0) {
        for(int i=0;i<n;i++) arr[i][0] = 0;
    }

    // print the resultant matrix
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

    setMatrixZero2(arr, m, n);

    return 0;
}