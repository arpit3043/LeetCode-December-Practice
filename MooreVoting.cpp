// URL: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=majority-element
#include <bits/stdc++.h>
using namespace std;
void isMajorityElement(int size, int arr[]) {
    int majorityIndex=0;
    int count=1;
    //loop to find the possible majority element
    for(int i=1; i<size; i++) {
        if(arr[majorityIndex]==arr[i]) {
            count++;
        }

        else {
            count--;
        }

        if(count==0) {
            majorityIndex=i;
            count=1;
        }
    }

    count=0;
    //loop to find the frequency of majority element
    for(int i=0; i<size; i++) {
        if(arr[majorityIndex]==arr[i])
        count++;
    }
    //checking for majority
    if(count>size/2) {
        cout<<"MAJORITY ELEMENT: "<< arr[majorityIndex]<< endl;
    }

    else {
        cout<<"THERE IS NO MAJORITY ELEMENT"<<endl;
    }
}

int main() {
    int input_array[] = {5, 1, 4, 1, 3, 1, 1};
    int N = sizeof(input_array)/sizeof(input_array[0]);
    isMajorityElement(N, input_array);
    return 0;
}