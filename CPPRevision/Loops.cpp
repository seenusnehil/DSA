#include<bits/stdc++.h>
using namespace std;

int main() {
    /*
    For loop: If you want to execute certain statements for a definite no. of times, we can use for loop
    It let you execute your statement for the no. of times you have defined (until the stopping condition is reached)
    */

    // This is the basic syntax of for loop, and can be used to execute statements in increasing or decreasing order
    for(int i=1;i<=5;i++) {
        cout<<"Snehil i: "<<i<<endl;
    }

    // While loop: This is another type of loop, and can be used as an alternative for for loop. 

    int i=1;

    while(i <= 5) {
        cout<<"Snehil "<<i<<endl;

        i++;
    }

    // do-while loop: This is just another loop, and it is used when we need to run our statement atleast for a single time
    // even if th condition is false. This

    int i=2;
    do{
        cout<<"Hi Snehil!"<<endl;
        i++;
    } while(i<=1);

    cout<<i;

    return 0;
}