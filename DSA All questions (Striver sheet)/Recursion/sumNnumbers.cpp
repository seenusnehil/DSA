#include<bits/stdc++.h>
using namespace std;

// Defined a global variable to store the sum (saving it from getting re-initilized every time the functions gts called)
int sum = 0;

// To print sum of the first n numbers
int sumNnumbers(int limit) {

    if(limit == 0) return sum;

    sum += limit;
    limit--;

    sumNnumbers(limit);
}

int main() {

    int limit;
    cin>>limit;

    cout<<sumNnumbers(limit);
    return 0;
}