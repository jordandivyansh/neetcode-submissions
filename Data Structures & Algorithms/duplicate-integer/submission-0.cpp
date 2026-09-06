class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int val = nums[i];
            for(int j = 0; j<n && i!=j;j++)
                if(nums[j]==val)
                    return true;
        }
        return false;
    }
};