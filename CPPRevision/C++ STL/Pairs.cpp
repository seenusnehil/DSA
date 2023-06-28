#include<bits/stdc++.h>
using namespace std;

int main() {

    // Pairs: They belong to the utility library in the CPP standard library

    pair<int, int> p = {1, 3};
    cout<<p.first<<" "<<p.second<<endl;

    // Nesting property of pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    for(int i=0;i<4;i++) {
        cout<<arr[i].first<<" ";
    }

    for(int i=0;i<4;i++) {
        cout<<arr[i].second<<" ";
    }

    cout<<endl;

    pair<int, char> str;
    str = {1, 'r'};
    cout<<str.first<<" "<<str.second;
}