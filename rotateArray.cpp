// URL: https://leetcode.com/problems/rotate-array/
class Solution {
public:
    void reverseArray(vector<int>&nums, int s, int e) {
        while(s<e) {
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverseArray(nums, 0, n-1);
        reverseArray(nums, 0, n - k - 1);
        reverseArray(nums, n - k, n - 1);
    }
};