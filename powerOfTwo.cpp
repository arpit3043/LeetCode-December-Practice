// url: https://www.codingninjas.com/codestudio/problems/power-of-two_893061?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker
#include <bits/stdc++.h>
bool isPowerOfTwo(int n) {
    // Write your code here
    if(n == 0) {
        return false;
    }
    if(ceil(log2(n)) == floor(log2(n))) {
        return true;
    }
    return false;
}
