//URL: https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
class Solution {
    static long nthFibonacci(long n){
        // code here
        long a = 1, b=1;
        long fib = 0;
        if(n==1 || n==2) {
            return 1;
        }
        for(long i=0; i<n-2; i++) {
            fib=(a+b)%1000000007;
            a=b;
            b=fib;
        }
        return fib;
    }
}

