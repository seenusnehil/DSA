#include<bits/stdc++.h>
using namespace std;

int main() {

    /* 
    Switch statements to print the particular week day, as per user input
    1. Monday
    2. Tuesday
    3. Wednesday
    4. Thursday
    5. Friday
    6. Saturday
    7. Sunday
    */

    int day;
    cin>>day;

    // From the following cases anyone would be selected as per the user input
    // break statement helps to stop the execution at any particular statement if the condition is satisfied
    switch(day) {
        case 1:
            cout<<"Monday";
            break;

        case 2:
            cout<<"Tuesday";
            break;

        case 3:
            cout<<"Wednesday";
            break;

        case 4:
            cout<<"Thursday";
            break;

        case 5:
            cout<<"Friday";
            break;

        case 6:
            cout<<"Saturday";
            break;

        case 7:
            cout<<"Sunday";
            break;

        default:
             cout<<"Invalid Input";
    }

    return 0;

}

