#include<bits/stdc++.h>
using namespace std;

int main() {

    /*
    Arrays (Basics) - 1D
    When do we need to use arrays?
    An array is a collection/containers where elements of similar data types are stored together at indexes
    E.g. An array of size 5 can store upto 5 elements of similar datatype
    */

    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    arr[4] += 12;

    cout<<arr[4];

    /*
    Arrays - 2D
    In here the elements can be stored in a box format, like with certain rows and columns (called a 2D manner)
    */

    This indicates a 2D array with 3 rows and 5 columns
    int arr[3][5];

    // Similarly we can enter all the other elements
    cin>>arr[0][0]>>arr[0][1]>>arr[1][3];

    cout<<arr[1][3];

    return 0;
}