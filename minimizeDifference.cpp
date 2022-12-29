// URL: https://www.codingninjas.com/codestudio/problems/minimize-the-difference_3208652?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTab=0
// Solution: https://youtu.be/D3_MkGn6c-4

#include<iostream>
#include<string>
#include<cmath>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
#define ll long long
using namespace std;
int partition(vector<int>&arr, int low, int high) {
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(i<j) {
        while(arr[i]<=pivot && i<=high-1) {
            i++;
        }
        while(arr[j]>pivot && j>=low) {
            j--;
        }
        if(i<j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(vector<int>&arr, int low, int high) {
    if(low<high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}

int minimizeIt(vector<int> A, int K) {
    // Write your code here
    quickSort(A, 0, A.size()-1);
    int res = abs((A[A.size()-1]-K)-(A[0]-K));
    for(int i=0; i<A.size()-1; i++) {
        int mini = min(A[0]+K, A[i+1]-K);
        int maxi = max(A[A.size()-1]-K, A[i]+K);
        if(mini<0 || maxi<0) {
            continue;
        }
        res = min(res,maxi-mini);
    }
    return res;
}

int main() {
    vector<int>arr = {1, 5, 8, 10};
    int K = 2;
    cout<<(minimizeIt(arr, K));
    return 0;
}