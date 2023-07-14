#include<bits/stdc++.h>
using namespace std;

// Method 1: Brute force
int findGCD(int num1, int num2) {

    vector<int> vecGCD;
    for(int i=1;i<=num2;i++) {
        // putting all the elements in the vecto, those divide both the numbers
        if(num1%i == 0 && num2%i == 0) {
            vecGCD.emplace_back(i);
        }
    }

    // Finding the max of array - GCD of the given numbers
    int ans = *max_element(vecGCD.begin(), vecGCD.end());

    return ans;
}

// Method 2: faster way - using Euclidean formula
int euclideanGCD(int num1, int num2) {

    // So, while both the numbers are greater than 0, we'll apply the euclidean formula
    // gcd(a, b) = gcd(a%b, b) [a > b] - keep repeating it until one of the number becomes 0
    // And in that scenario, the non-zero number will be the gcd of two numbers
    while(num1 > 0 && num2 > 0) {

        if(num1 > num2) num1 = num1%num2;
        else
            num2 = num2%num1;
    }

    // checking which of the number is 0, so we can declasre the other as gcd
    if(num1 == 0) return num2;
    return num1;
}

int main() {

    int num1, num2;
    cin>>num1>>num2;

    cout<<findGCD(num1, num2);
    return 0;
}