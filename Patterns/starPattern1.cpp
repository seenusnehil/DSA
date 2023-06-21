#include<bits/stdc++.h>
using namespace std;


int main() {

    
    /*
    *
    * *
    * * *
    * * * *

    print the above pattern
    */

    // Outer loop for the number of rows
    for(int row=1;row<=4;row++) {

        // inner loop for the number of columns
        for(int col=1;col<=row;col++) {

            // what to print
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    /*

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    print the above pattern
    */

    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    /*

    * * * * *
    * * * * 
    * * *
    * *
    * 

    print the above pattern
    */

    for(int i=1;i<=5;i++) {
        for(int j=1;j<=(5-(i-1));j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    print the above pattern
    */

    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    * 

    print the above pattern
    */

    for(int i=1;i<=9;i++) {

        // till the first half from top
        if(i <= 5) {
            for(int j=1;j<=i;j++) {
                cout<<"* ";
            }
            cout<<endl;
        }

        // the second half, printing in reverse order
        else {
            for(int j=1;j<=(9-i+1);j++) {
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    cout<<endl;

    /*

         *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         * 

    print the above pattern
    */

    return 0;
}