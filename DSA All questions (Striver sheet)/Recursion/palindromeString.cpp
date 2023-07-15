#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(string word, int s, int e) {

    // If any character doesn't match or start pointer become greater than tha end pointer then
    // this indicates the word is not a palindrome
    if(word[s] != word[e] || s > e) {
        cout<<"Not Palindrome";
        return;
    }

    // If the pointers reaches the center element, 
    // it means all the elements on bothe sides are equal, hence a palindrome
    if(s == e) {
        cout<<"Palindrome";
        return;
    }

    // Recursive call
    return checkPalindrome(word, s+1, e-1);
}

int main() {

    string word;
    cin>>word;

    int s = 0;
    int e = word.length()-1;

    checkPalindrome(word, s, e);

    return 0;
}