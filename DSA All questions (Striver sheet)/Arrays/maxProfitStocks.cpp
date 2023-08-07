#include<bits/stdc++.h>
using namespace std;

// Brute force approach: Simply looping through the array twice (nested) to get a hold on different elements 
// consicutively, and find their diffrence as profit, and update the maxProfit if it is greater than the previous one
int maxProfitStocks(int arr[], int n) {

    int maxProfit=0;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            maxProfit = max(maxProfit, arr[j] - arr[i]);  // calculating the max. profit 
        }
    }

    return maxProfit;
}

// Optimized approach: Looping through the array once, and finding the maximum profit
// We'll be keeping 2 variables one for the current smallest price, and the other for maximum profit till now
// minPrice - it will hold the current minimum price, if the current element < minPrice, update it else continue
// maxProfit - it will hold the value of the maximum profit till now, if its greater than the previous one, update it
int maxProfitStocks2(int arr[], int n) {

    int minPrice=INT_MAX, maxProfit=0;
    for(int i=0;i<n;i++) {

        // calculating the minimum price and maximum profit simultaeneously
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }

    return maxProfit;
}

int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<maxProfitStocks2(arr, n);

    return 0;
}