#include<bits/stdc++.h>
using namespace std;

// Defined a global variable to store the sum (saving it from getting re-initilized every time the functions gts called)
int fac = 1;

// To print factorial of n
int factorial(int limit) {

    if(limit == 1) return fac;

    fac *= limit;
    limit--;

    factorial(limit);
}

int main() {

    int limit;
    cin>>limit;

    cout<<factorial(limit);
    return 0;
}