    #include<bits/stdc++.h>
    using namespace std;

    int main() {

        /* Example 1
        If else statement
        We wrote a program to check whether the person can vote or not
        if age >= 18, you can vote, else you cannot vote
        */
        int age;
        cout<<"Enter your age";
        cin>>age;

        if(age >= 18) {
            cout<<"Congrats you can vote!";
        }
        else {
            cout<<"Sorry you're not allowed to vote!";
        }


        /* Example 2
        The school have following grading scheme:
        a. Below 25 - F
        b. 25 to 44 - E
        c. 45 to 49 - D
        d. 50 to 59 - C
        e. 60 to 79 - B
        f. 80 to 100 - A

        Ask the user to enter their marks and update their corresponding grade
        */

        int marks;
        cout<<"Enter your marks: ";
        cin>>marks;

        if(marks < 25) {
            cout<<"Grade is F";
        }

        else if(marks >= 25 && marks<=44) {
            cout<<"Grade is E";
        }
       // This else if can be trimmed as:
       // else if(marks<=44) as marks >=25 will aumatically be considered under marks <=44 category
       // And similarly it can be done with other conditions

        else if(marks >= 45 && marks<=49) {
            cout<<"Grade is D";
        }

        else if(marks >= 50 && marks<=59) {
            cout<<"Grade is C";
        }

        else if(marks >= 60 && marks<=79) {
            cout<<"Grade is B";
        }

        else {
            cout<<"Grade is A";
        }


        /* Example 3 - nested if else
        Take the age of the user, then decide accordingly:

        1. if age < 18, you're not eligible for a job
        2. if age >= 18 and <=59, you're eligible for the job
        3. if age >=55 and <=59, then youre eligible for the job, but will be retring soon
        4. if age >59, you cannot work anymore,, happy retired life
        */

        int age;
        cin>> age;

        if(age < 18) {
            cout<<"Not eligible for job";
        }

        else if(age <= 59) {
            cout<<"Eligible for job";
            if(age >= 55) {
                cout<<", but will be retiring soon";
            }
        }

        else {
            cout<<"Cannot work anymore, happy retired life!";
        }

        return 0;
    }
    







