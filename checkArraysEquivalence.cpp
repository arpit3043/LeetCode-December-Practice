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
bool checkIfarraysAreEqual(vector<ll> A, vector<ll> B, int N) {
    unordered_map<int, int> map;
    for(int i=0; i<N; i++){
        map[A[i]]++;
        map[B[i]]--;
    }
        
    for(auto it : map){
        if(it.second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long N = 5;
    vector<ll>A = {1,2,5,4,0};
    vector<ll>B = {2,4,5,0,1};
    cout<<checkIfarraysAreEqual(A,B,N)<<endl;
    return 0;
}