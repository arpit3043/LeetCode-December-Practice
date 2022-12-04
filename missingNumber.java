// url: https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number
public static int missingNumber(int A[], int N) {
        // Your code goes here
        int sum = (N*(N+1))/2;
        for(int i=0; i<N; i++) {
            sum-=A[i];
        }
        return sum;
    }