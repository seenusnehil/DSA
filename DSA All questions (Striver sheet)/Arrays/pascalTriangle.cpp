#include<bits/stdc++.h>
using namespace std;

vector<int> generatePascalRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i=1;i<row;i++) {
        ans *= (row-i);
        ans /= (i);
        ansRow.push_back(ans);
    }

    return ansRow;
}

vector<vector<int>> printPascalTriangle(int n) {
    vector<vector<int>> ans;
    for(int i=1;i<=n;i++) {
        ans.push_back(generatePascalRow(i));
    }

    return ans;
}

int main() {

    int n;
    cin>>n;

    vector<vector<int>> pascalTriangle = printPascalTriangle(n);
    for (vector<int> vect1D : pascalTriangle) {
            for (int x : vect1D) {
                cout << x << " ";
            }    
            cout << endl;
    }

    return 0;
}