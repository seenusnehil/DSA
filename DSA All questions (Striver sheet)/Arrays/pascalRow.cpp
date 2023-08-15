#include<bits/stdc++.h>
using namespace std;

// Function to print the nth row from the pascal triangle
void pascalTriangleRow(int n) {

    int res = 1;
    cout<<res<<" ";
    for(int i=1;i<n;i++) {
        res *= (n-i);
        res /= i;
        cout<<res<<" ";
    }
}

int main() {

    int row;
    cin>>row;

    pascalTriangleRow(row);

    return 0;
}