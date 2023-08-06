#include<bits/stdc++.h>
using namespace std;

long cube(int num) {
    return (num*num*num);
}

// armstrong number is the one which follows the following pattern:
// Input:153
// Output: 1^3 + 5^3 + 3^3 = 153
// So, it will an armstrong number, else, it won't be
long armStrong(long num) {
    int rem = 0;
    long arm = 0;

    while(num > 0) {
        rem = num%10;
        arm = arm + cube(rem);

        num /= 10;
    }

    return arm;
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