#include<bits/stdc++.h>
using namespace std;


// will do it later
void makeZero(int temp[], int row, int col, int idxi, int idxj) {

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(i == idxi or j == idxj) temp[i][j] = 0;
        }
    }

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<temp[i][j]<<" ";
        }

        cout<<endl;
    }
}

void rowColumnZero(int arr[], int row, int column) {

    int temp[row][column];
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            temp[i][j] = arr[i][j];
        }
    }

    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            if(arr[i][j] == 0) {
                makeZero(temp, row, column, i, j);
            }
        }
    }

}

int main() {

    int row, column;
    cin>>row>>column;

    int arr[row][column];
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
            cin>>arr[i][j];
        }
    }

    rowColumnZero(arr, row, column);
}