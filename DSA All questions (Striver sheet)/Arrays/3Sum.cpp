#include<bits/stdc++.h>
using namespace std;

// Brute force approach to get the triplets with sum 0
vector<vector<int>> sumTriplets(vector<int> arr, int n) {

    // using a set to store the result, 
    // as a set doesn't allow duplicates to get stored
    set<vector<int>> st;

    // looping over 3 elements simultaeneously, and checking each combination
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                // If hte sum == 0, we store in a temp vector
                if(arr[i]+arr[j]+arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};

                    // We're sorting the vector, so as set will recognise, 
                    // if the vector sent to store is a duplicate or not
                    sort(temp.begin(), temp.end());
                    st.insert(temp);  // vector inserted idf it isn't a duplicate
                }
            }
        }
    }

    // storing the set in a matrix to print all the triplets at once
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Better solution to get the triplet with sum 0 
// Here we bascically try to reduce the O(N3) complexity of the previous computation
vector<vector<int>> sumTriplets2(vector<int> arr, int n) {

    // a set to store unique vectors containing triplets
    set<vector<int>> st;
    for(int i=0;i<n;i++) {

        // to store the elements to search from 
        // being a set, it doesn't any duplicate values
        set<int> hashSet; 
        for(int j=i+1;j<n;j++) {

            // instead of looping for the third element, we're calculating third element
            // by doing target - (arr[i] + arr[j]) -> 0 - (arr[i] + arr[j]) = -(arr[i] + arr[j])
            int third = -(arr[i]+arr[j]);

            // Now, checking that if that third element is there in the hashSet or not
            // If it is there, we simply store the elements in the vector, as their sum consitute 0
            if(hashSet.find(third) != hashSet.end()) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());  // sorting it to avoid any vector duplicacy
                st.insert(temp);  // inserting the vector in the set
            }
            // inserting jth element in the hashSet
            // The reason why we're not inserting and then searching in the hashset
            // is that is we do so, we'll end up repeating the elements and will consider
            // duplicate elements, which will generate wrong answers
            hashSet.insert(arr[j]);
        }
    }

    // finally storing the set vectors in the matrix
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Optimal solution to get the triplet with sum 0 
vector<vector<int>> sumTriplets3(vector<int> arr, int n) {

    // Creating a matrix to store the triplets with sum 0
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end()); // sorting the vector

    /*Looping through the given array with
    - fixed index i, that will move only when net iteretion is requierd
    - variable indexes like j and k, which moves according the situation in an iteration
    At each iteration, we'll see whether the sum=0 or sum<0 or sum>0, and depending upon the situation
    we move our indexes and get the desired result, whenever the sum gets 0, we store in the matrix
    */ 
    
    for(int i=0;i<n;i++) {

        // Removing duplicates from considering them in calculations
        if(i != 0 && arr[i] == arr[i-1]) continue;

        // variable indexes
        int j = i+1;
        int k = n-1;

        // While j and k remains under boundaries
        while(j<k) {
            
            int sum = arr[i]+arr[j]+arr[k]; // calculating the sum of the

            // if the sum < 0, it means we require bigger elements hence we move j forward
            //  as the array is sorted, and increases from left to right
            if(sum < 0) j++;

            // if the sum > 0, it means we require smaller elements, hence we move k backwards
            // from greater elements to smaller elements
            else if(sum > 0) k--;

            // Else the sum is 0
            else {
                // store in a vector, and push this vector to the ans matrix
                // and move j one step forward, and k one step backward
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;

                // avoiding duplicates to be counted, and skipping over them
                // while staying under boundaries
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
            }

        }
    }

    return ans;
}

int main() {

    vector<int> arr = { -1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = sumTriplets3(arr, n);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;

    return 0;
}