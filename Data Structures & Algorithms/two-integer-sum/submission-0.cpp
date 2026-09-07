class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i<n;i++){
            int val1 = nums[i];
            for(int j = i + 1; j<n;j++){
                int val2 = nums[j];
                if(val1 + val2 == target)
                    return {i,j};
            }
        }
        return {};
    }
};
