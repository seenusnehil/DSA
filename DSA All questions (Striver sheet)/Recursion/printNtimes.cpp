#include<bits/stdc++.h>
using namespace std;

/*
First lines of codes to understand the basics of recursion

-> In infinite recursion, the code doesn't actually run infinite times, it runs till there is a stack overflow 
(function calls get out of memory limit)

-> The recursion will stop, as soon as it reaches the stopping condition, called base condition.
-> We generally represent recursion function calls using recursion tree

*/

int limit=0;

// Recursive function to print the counter for n number of times (in the reverse order)
void printReverse(int cnt) {

    if(cnt == 0) return;

    cout<<cnt<<" ";
    cnt--;
    printReverse(cnt);
}

// Recursive function to print the counter for n number of times (in the normal order)
void printForward(int cnt) {

    if(limit == cnt) return;

    limit++;
    cout<<limit<<" ";

    printForward(cnt);
}

int main() {

    int cnt;
    cin>>cnt;

    printReverse(cnt);
    cout<<endl;
    printForward(cnt);
    return 0;
}