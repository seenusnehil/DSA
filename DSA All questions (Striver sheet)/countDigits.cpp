#include<bits/stdc++.h>
using namespace std;

int countDigitsLog(long n) {
    int count = 0;
    // This is another way to find the no. of digits in a number
    count = (int)(log10(n) + 1);

    return count;
}

int countDigits(long n) {

    int rem;
    int count = 0;
    while(n > 0) {
        count += 1;
        n = n/10;
    }

    return count;
}

int main() {
    long n;
    cin>>n;

    cout<<countDigits(n)<<endl;;
    cout<<countDigitsLog(n);
    return 0;
}