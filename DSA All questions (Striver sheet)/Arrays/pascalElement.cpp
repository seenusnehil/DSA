#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {

    int res = 1;
    for(int i=0;i<r;i++) {
        res *= (n-i);
        res /= (i+1);
    }

    return res;
}

// Function to return the element at (row, col) position in the Pascal Tree
int pascalTriangleElement(int row, int col) {
    return nCr(row-1, col-1);
}

int main() {

    int row, col;
    cin>>row>>col;

    cout<<pascalTriangleElement(row, col);

    return 0;
}