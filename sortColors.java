// URL: https://leetcode.com/problems/sort-colors/description/
class Solution {
    public void sortColors(int[] nums) {
        int N = nums.length;
        int s = 0;
        int e = N-1;
        int i = 0;
        while(i<=e) {
            if(nums[i]==0) {
                int temp = nums[i];
                nums[i] = nums[s];
                nums[s] = temp;
                s++;
            }

            else if(nums[i]==2) {
                int temp1 = nums[i];
                nums[i] = nums[e];
                nums[e] = temp1;
                e--;
                continue;
            }
            i++;
        }
        return ;
    }
}