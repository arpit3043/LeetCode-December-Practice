// URL: https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays
class Solution {
    //Function to return a list containing the union of the two arrays.
    public static ArrayList<Integer> findUnion(int arr1[], int arr2[], int n, int m) {
        // add your code here
        HashSet<Integer> h1 = new HashSet<>();
        for(int i=0; i<n; i++) {
            h1.add(arr1[i]);
        }
        
        for(int j=0; j<m; j++) {
            h1.add(arr2[j]);
        }
        
        ArrayList<Integer> a1 = new ArrayList<>();
        a1.addAll(h1);
        Collections.sort(a1);
        return a1;
    }
}