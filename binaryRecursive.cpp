//URL = https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win
class Solution {
    public static int binarySearch(int[] arr, int s, int e, int num) {
        if (s<=e) {
            int mid = s+(e-s)/2;
            if (arr[mid] == num) {
                return 1;
            }
            
            if(arr[mid]>num) {
                return binarySearch(arr, s, mid-1, num);
            }
            
            if (arr[mid]<num) {
                return binarySearch(arr, mid+1, e, num);
            }
        }
        return -1;
    }
    
    static int searchInSorted(int arr[], int N, int K) {
        // Your code here
        return binarySearch(arr, 0, N-1, K);
    }
}