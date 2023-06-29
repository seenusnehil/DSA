#include<bits/stdc++.h>
using namespace std;

long cube(int num) {
    return (num*num*num);
}

long armStrong(long num) {
    int rem = 0;
    long arm = 0;

    while(num > 0) {
        rem = num%10;
        arm = arm + cube(rem);

        num /= 10;
    }

    return arm;170
}

int main() {

    int num;
    cin>>num;

    long armstrongNum = armStrong(num);
    if(num == armstrongNum) {
        cout<<"Armstrong";
    }

    else {
        cout<<"Not Armstrong";
    }
    return 0;
}