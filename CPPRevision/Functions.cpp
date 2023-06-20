#include<bits/stdc++.h>
using namespace std;

/*
Functions
Functions are an integral part of programming, they are a setof code lines that performs a certain task whenever it is asked to do something
1. It improves the readability of the program
2. It is used to modularize the program  
3. It can be used to perform certain repetetive tasks multiple times

Functions can be of multiple types:
a. void - parameterized
b. void - non parameterized
c. return - parameterized
d. non-return - parameterized
*/

// void-non parameterized function
void printName() {
    cout<<"hey Snehil";
}

// void-parameterized function
void printMyName(string name) {
    cout<<"Hey "<<name<<endl;
}

// return-prameterized function
int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;
}


// Arguements here are passed by value
void doSomething(int num) {
    cout<<num<<endl;
    num += 5;

    cout<<num<<endl;
    num += 5;

    cout<<num<<endl;
}

// Arguements here passed by reference
void doSomething2(int &num) {
    cout<<num<<endl;
    num += 5;

    cout<<num<<endl;
    num += 5;

    cout<<num<<endl;
}

// Passing the arguements by reference and by value
int main() {

    // calling the functions
    printName();

    cout<<endl;

    string name;
    cin>>name;
    printMyName(name);

    cout<<endl;

    int num1, num2;
    cin>>num1>>num2;
    int res = sum(num1, num2);
    cout<<res;

    int num = 10;

    doSomething(num);
    cout<<num<<endl; // As the variable was passed with value, it sends a copy of the original variable to the function

    doSomething2(num);
    cout<<num; // Here the value of original num did change just because the variable was passed as reference (original variable was sent)

    return 0;

}