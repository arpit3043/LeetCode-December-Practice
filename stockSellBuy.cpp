// URL: https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/0?company[]=Intuit+&page=1&query=company[]Intuit+page1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=stock-buy-and-sell
//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>
using namespace std;
// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);
// Driver program to test above functions
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}
// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    int buy = 0;
    int sell = 0;
    int flag = 0;
    for(int i = 1; i<n; i++) {
        if(price[i-1]<=price[i] && price[i]!= price[buy]) {
            sell++;
            flag = 1;
        }
        else if(buy==sell) {
            buy = i;
            sell = i;
        }
        
        else {
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
            buy = i;
            sell = i;
        }
        if(buy!= n-1 && sell==n-1) {
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
        }
    }
    
    if(flag==0) {
        cout<<"No Profit"<<endl;
        return;
    }
    cout<<endl;
}