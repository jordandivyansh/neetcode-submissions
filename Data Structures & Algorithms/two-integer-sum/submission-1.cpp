class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> umap;
        for(int i = 0; i<n; i++){
            umap.insert({nums[i],i});
        }
        for(int i = 0; i<n; i++){
            int value_needed = target - nums[i];
            if(umap[value_needed]){
                return {i, umap[value_needed]};
            }
        }
        return {};
    }
};
