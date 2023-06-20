// This header helps us to process inputs and outputs in the program
// i.e. cout and cin
#include<bits/stdc++.h>

// This helps the compiler understand that all the functions are from the standard library
// Else you need to write st:: in front of every function you're using
using namespace std;


    /*
    Types of data types we use in C++
    int, long, long long, float, double
    string, getline
    char
    */

   int main() {

    int num = 10;
    cout<<"The number is: "<<num<<endl;

    long bigNum = 81263547;
    cout<<"The nig number is: "<<bigNum<<endl;

    long long bigBigNum = 198451823549218;
    cout<<"Very very big number is: "<<bigBigNum<<endl;

    float decNum = 5.67;
    cout<<"Float num: "<<decNum<<endl;

    double bigDecNum = 7.283455;
    cout<<"Big decimal number: "<<bigDecNum<<endl;

    string word = "Snehil";
    cout<<word<<endl;

    string newWord;
    getline(cin, newWord);
    cout<<"Getline can take a big sentence with spaces like: "<<newWord<<endl;;

    char a = 'c';
    cout<<a;

    return 0;
   }