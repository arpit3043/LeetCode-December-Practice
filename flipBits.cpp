// URL: https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381872?leftPanelTab=0
#include <bits/stdc++.h> 
using namespace std;
int flipBits(int* arr, int n) {
    // WRITE YOUR CODE
    int count0=0;
    int maxcount=0;
    int count1=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==0) {
            count0++;
        }
        else {
            count0--;
            count1++;
        }
        if(count0>maxcount) {
            maxcount=count0;
        }
        if(count0<0) {
           count0=0;
       }          
   }
    return maxcount+count1;
}

int main() {
    int arr[] = {1, 0, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<flipBits(arr, n);
}