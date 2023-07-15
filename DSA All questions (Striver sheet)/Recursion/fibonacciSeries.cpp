#include<bits/stdc++.h>
using namespace std;

// Approach: I used a vector here to store the elements of the fibonacci series
// Every element in the vector starting from index 2, will be the sum of previous 2 elements

vector<int> fiboSeries(vector<int> fibo, int f, int s, int n) {

    // return when limit is reached
    if(fibo.size() == n+1) return fibo;

    // storing the sum of previous 2 elements and then inserting them in the vector
    int obj = fibo[f] + fibo[s];
    fibo.emplace_back(obj);

    // incrementing the f, s and recursively calling the function
    return fiboSeries(fibo, f+1, s+1, n);
}

int main() {

    vector<int> fibo;
    fibo.emplace_back(0);
    fibo.emplace_back(1);

    int n;
    cin>>n;

    vector<int> ans = fiboSeries(fibo, 0, 1, n);

    for(auto it: ans) {
        cout<<it<<" ";
    }

    return 0;
}