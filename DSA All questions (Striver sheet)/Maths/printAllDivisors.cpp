#include<bits/stdc++.h>
using namespace std;

// Method 1
vector<int> printDivisors(int num) {

    // vector for storing the divisors
    vector<int> divisors;
    for(int i=1;i<=num;i++) {  // all the divisors would lie between 1 and the number itself
        // if num is completely divided by the number
        if(num%i == 0) {
            divisors.emplace_back(i);
        }
    }

    return divisors;
}

// Method 2
/*
Explaination: After some observation, we can observe that the factors gets repeated
e.g. factors of 36: 1 x 36 = 36
                    2 x 18 = 36
                    3 x 12 = 36
                    4 x 9 = 36
                    6 x 6 = 36
                    9 x 4 = 36
                    12 x 3 = 36
                    18 x 2 = 36
                    31 x 1 = 36
So, over here, we can observe that the factors gets repeated after the sqrt of 36 i.e. 6, hence we can reduce the search space 
to sqrt of the number of factors
and then check for all the factors
First we check for the factors in the first part of the multiplication, then check for the second factor that is on the other 
side of the multiplication with the condition (num/i) != i

And hence, we can get all the factors in much smaller search space

*/
void Divisors(int num) {
    for(int i=1;i<=sqrt(num);i++) {
        if(num%i == 0) {
            cout<<i<<" ";
        }
        // printing the other half of factors
        if((num/i) != i) {
            cout<<(num/i)<<" ";
        }
    }
}

int main() {

    int num;
    cin>>num;

    vector<int> ans = printDivisors(num);
    for(auto it: ans) {
        cout<<it<<" ";
    }

    cout<<endl;

    Divisors(num);

    return 0;
}