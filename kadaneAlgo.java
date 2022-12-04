// URL : https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381870?leftPanelTab=0
import java.util.* ;
import java.io.*; 
public class Solution {
    public static long maxSubarraySum(int[] arr, int n) {
		// write your code here
        long currSum = 0;
        long maxSum = Integer.MIN_VALUE;
        for(int i=0; i<n; i++) {
            currSum = currSum+arr[i];
            maxSum = Math.max(currSum, maxSum);
            if(currSum<0) {
                currSum = 0;
            }
        }
        if(maxSum<0) {
                maxSum = 0;
        }
        return maxSum;
	}

}
