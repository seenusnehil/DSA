#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    /*
    *
    * *
    * * *
    * * * *

    print the above pattern
    */

    // Outer loop for the number of rows
    for(int row=1;row<=n;row++) {

        // inner loop for the number of columns
        for(int col=1;col<=row;col++) {

            // what to print
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
}

void pattern2(int n) {
    /*

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

    print the above pattern
    */

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
}

void pattern3(int n) {
    /*

    * * * * *
    * * * * 
    * * *
    * *
    * 

    print the above pattern
    */

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=(n-(i-1));j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

}

void pattern4(int n) {
    /*

    * * * * *
    * * * * 
    * * *
    * *
    * 

    print the above pattern
    */

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=(n-(i-1));j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
}

void pattern5(int n) {
    /*

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

    print the above pattern
    */

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

}

void pattern6(int n) {
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

    for(int i=1;i<=(2*n-1);i++) {
        int totalColumns = i > n ? 2*n - i : i;

        for(int j=1;j<=totalColumns;j++) {
            cout<<"* ";
        }

        cout<<endl;
    }
}

void pattern7(int n) {
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

    for(int i=1;i<=(2*n-1);i++) {

        int totalColumns = i > n ? 2*n - i : i;
        int spaces = n-totalColumns;

        for(int j=1;j<=spaces;j++) {
            cout<<" ";
        }
        for(int j=1;j<=totalColumns;j++) {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;
}

void pattern8(int n) {
    /*
    
    * * * * * 
     * * * *
      * * *
       * *
        *
       * *
      * * *
     * * * *
    * * * * *
    
    print the above pattern
    */

    for(int i=1;i<=(2*n-1);i++) {
        int totalColumns = i > n ? i-n+1 : n-i+1;
        int spaces = i > n ? 2*n-i-1 : i-1;

        for(int j=1;j<=spaces;j++) {
            cout<<" ";
        }

        for(int j=1;j<=totalColumns;j++) {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;

}

void pattern9(int n) {
    /*
        1
       212
      32123
     4321234
    543212345

    print the above pattern
    */

    for(int i=1;i<=n;i++) {

        int spaces = n-i+1;
        for(int k=1;k<=spaces;k++) {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--) {
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++) {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    cout<<endl;
}

void pattern10(int n) {
    /*
        1
       212
      32123
     4321234
    543212345
     4321234
      32123
       212
        1

    print the above pattern
    */

    for(int i=1;i<=(2*n-1);i++) {

        int totalColumns = i>n ? 2*n-i : i;
        int spaces = i>n ? i-n+1 : n-i+1;
        for(int k=1;k<=spaces;k++) {
            cout<<"  ";
        }
        for(int j=totalColumns;j>=1;j--) {
            cout<<j<<" ";
        }
        for(int j=2;j<=totalColumns;j++) {
            cout<<j<<" ";
        }

        cout<<endl;
    }

}

void pattern11(int n) {

    /*
      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********
    
    */

    /// will try later
    for(int i=1;i<=2*n;i++) {

        int totalColumns = i>n ? 2*i-2*n : 2*n-2*i+2;
        int spaces = i>n ? 2*i-2*totalColumns: 2*i-2; 

        for(int j=1;j<=totalColumns;j++) {
            cout<<"*";
        }

        for(int s=1;s<=spaces;s++) {
            cout<<" ";
        }

        for(int j=1;j<=totalColumns;j++) {
            cout<<"*";
        }

        cout<<endl;
    }

    cout<<endl;
}

int main() {

    // Calling out all the functions
    pattern1(5);
    pattern2(5);
    pattern3(5);
    pattern4(5);
    pattern5(5);
    pattern6(5);
    pattern7(5);
    pattern8(5);
    pattern9(5);
    pattern10(5);
    pattern11(5);
    

    
    return 0;
}