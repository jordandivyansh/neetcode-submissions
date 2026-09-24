class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // O(1) space
        int n = nums.size();
        vector<int> ans;
        ans.push_back(1); // [1]
        for(int i = 1; i < n; i++){
            ans.push_back(nums[i-1]*ans.back());
        }
        // nums = [1,2,4,6]
        // prefix = [1,1,2,8]
        // suffix = [48,24,6,1]
        // ans = [48,24,12,8]
        long rightProduct = 1;
        for(int i = n-1; i >= 0; i--){
            ans[i]=ans[i]*rightProduct;
            rightProduct *= nums[i];
        }
        return ans;
    }
};
