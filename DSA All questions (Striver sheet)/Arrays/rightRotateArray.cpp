#include<bits/stdc++.h>
using namespace std;

// void rightRotateArray(int arr[], int n, int k) {
//     int temp[n];
//     for(int i=0;i<n;i++) {

//         int rotate = ((i-k);
//         if(rotate<0) {
//             rotate += n;
//         })

//         temp[i] = arr[(rotate%n)];
//     }

//     for(int i=0;i<n;i++) {
//         cout<<temp[i]<<" ";
//     }   
// }

void rightRotateArray2(int arr[], int n, int k) {
    
    reverse (arr, arr+n);

    reverse (arr, arr+n-k-1);

    reverse (arr+k, arr+n);

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }  

}

int main() {

    int n;
    cin>> n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    rightRotateArray2(arr, n, k);
    return 0;
}