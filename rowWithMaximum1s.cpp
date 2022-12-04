// URL: https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=row-with-max-1s
class Solution {
public:
	int rowWithMax1s(vector<vector<int>>arr, int n, int m) {
	    // code here
	    int max = INT_MIN;
	    int row = -1;
	    for(int i=0; i<n; i++) {
	        int count = 0;
	        for(int j=0; j<m; j++) {
	            if(arr[i][j] == 1) {
	                count++;
	            }
	        }
	        
	        if(max<count) {
	            max = count;
	            row = i;
	        }
	    }
	    return row;
	}
};