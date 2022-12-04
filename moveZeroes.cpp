// URL: https://leetcode.com/problems/move-zeroes/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1)
            return;
        int l=0;
        int r=0;
        int temp;
        while(r<n) {
            if(nums[r]==0) {
                r++;
            }
            
            else {
                swap(nums[r++], nums[l++]);
            }
        }
    }
};