class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            int start = i+1;
            int end = n-1;
            int val1 = nums[i];
            while(start < end){
                int sum = nums[start] + nums[end] + val1;
                if(sum == 0){
                    ans.push_back({val1, nums[start], nums[end]});
                    start++;
                    end--;
                    while(start < end && nums[start] == nums[start-1])
                        start++;
                    while(start < end && nums[end] == nums[end+1])
                        end--;
                }
                else if(nums[start] + nums[end] + val1 > 0)
                    end--;
                else
                    start++;
            }
            while(i < n-1 && nums[i] == nums[i+1])
                i++;
        }
        return ans;
    }
};
