#include<bits/stdc++.h>
using namespace std;

int reverseNum(long num) {
    int rem;
    int revNum = 0;
    while(num > 0) {
        rem = num%10;
        // Adding the last digit to revNum
        revNum = (revNum*10) + rem;
        num /= 10;
    }

    return revNum;
}


int main() {

    long num;
    cin>>num;

    cout<<reverseNum(num);
    return 0;
}