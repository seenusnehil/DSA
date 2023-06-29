#include<bits/stdc++.h>
using namespace std;

int main() {

    /*
    Vectors: They are similar to arrays used in the programs, but when you define an array, you declare its size too
    which cannot be changes in future, and on the other hand vectors are dynamic is size, we can extend/reduce the size of the vector.
    So, this is the advantage, vectors have over arrays in cpp
    */ 

    vector<int> v; // This creates an empty vector container
    v = {1, 2, 3, 4, 5};
    cout<<v[1]<<" "<<v[2]<<endl;

    /* So, int his way we can insert a new element in a vector, which was impossible in the case of arrays with
    push_back and emplace_back, both are the methods to insert an element in a vector, but computationally 
    emplace_back is faster than push_back */
    v.push_back(6);
    v.emplace_back(7);
    cout<<v[5]<<" "<<v[6]<<endl;

   vector<pair<int, int>> vecP;

   vecP.emplace_back(1, 2);
   vecP.push_back({1, 2});

   vecP.emplace_back(3, 4); // we can insert elements only in pairs
   cout<<vecP[2].second<<endl;


   // This declares a vectorof size 5, and default element is 30 for all 5 values
   // This size is dynamic, hence can be changes anytime
   vector<int> vec(5, 30);
   cout<<vec[3]<<" "<<vec[4]<<endl;


   // empty vector of size 5
   vector<int> newVec(5);

   // copying the elements of one vector to the other
   vector<int> el(7, 24);
   vector<int> newEl(el); // Copied the vector el in newEl
   cout<<newEl[2]<<" "<<newEl[5]<<endl;

   // Iterating in a vector
   // "it" is refering to an address location where the first element of the vector v is stored
   vector<int> :: iterator it = v.begin();

   it++;
   cout<<(*it)<<" "<<endl; // sing *, we can access the element stored at that location pointed by "it"

   // Other iterator

//    vector<int> :: iterator it1 = vec.end(); // "end" iterator points to the location after the last element of the vector
//    vector<int> :: iterator it2 = vecP.rend(); // "rend or reverse end" iterator would point to the location just before the first element of the vector
//    vector<int> :: iterator it3 = el.rbegin(); // "rbegin or reverse begin" iteretor would point to the location where the last element of the vector is stored
                                            // and then when you do it++, the vector would be traverse in the reverse order

    

    // Ways to iterate over all the vector elements using iteratro concept

    vector<int> itVec;
    itVec.emplace_back(10);
    itVec.emplace_back(20);
    itVec.emplace_back(30);
    itVec.emplace_back(40);
    itVec.emplace_back(50);

    //1. using complete syntax of iterator
    for(vector<int> :: iterator it = itVec.begin() ; it != itVec.end() ; it++) {
        cout<<(*it)<<" ";
    }

    cout<<endl;

    //2. Using "auto" keyword, it automatically assigns the datatype you're using to the iteretor by looking at the data the container is storing
    for(auto it = itVec.begin() ; it != itVec.end() ; it++) {
        cout<<(*it)<<" ";
    }

    cout<<endl;

    //3. A very simple and straight forward method to iterate over the vector
    for(auto it : itVec) {
        cout<<it<<" ";
    }

    cout<<endl;


    // Erase elements from the vector
    vector<int> ve;
    ve.emplace_back(12);
    ve.emplace_back(24);
    ve.emplace_back(36);
    ve.emplace_back(48);
    ve.emplace_back(60);

    ve.erase(ve.begin());
    cout<<ve[0]<<endl;

    // When deleting more than 1 element, we write it in the form [start, end), 
    // end is one location ahead of the element you want to delete, end is not included
    ve.erase(ve.begin()+1, ve.begin()+2); // {24, 36, 48, 60} -> 36 and 48 will be deleted
    for(auto it: ve) {
        cout<<it<<" ";
    }
    
    cout<<endl;

    // Inserting element in a vector
    ve.insert(ve.begin(), 4);  // inserting 4 at the beginning of the vector
    ve.insert(ve.begin(), 4, 12);  // inserting 4 times 12 at the beginning of the vector
    for(auto it: ve) {
        cout<<it<<" ";
    }

    cout<<endl;

    // copying a vector in another vector at certain position
    vector<int> copy(2, 45);
    ve.insert(ve.begin()+1, copy.begin(), copy.end()); // from copy begin to end, the vector completely copied into vector ve after 1st positon
    for(auto it: ve) {
        cout<<it<<" ";
    }

    // some other vector operations

}