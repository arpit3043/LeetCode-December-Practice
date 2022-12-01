// URL = https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int>twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v1, v2;
        v1 = nums;
        sort(nums.begin(), nums.end());
        int l = 0, m = n-1;
        while(l!=m) {
            int sum = nums[l] + nums[m];
            if(sum==target)
                break;
            
            else if(sum>target)
                m--;
            
            else
                l++;
        }
        
        for(int i=0; i<v1.size(); ++i) {
            if(v1[i]==nums[l])
                v2.push_back(i);
            
            else if(v1[i]==nums[m])
                v2.push_back(i);
        }
        return v2;
    }
};