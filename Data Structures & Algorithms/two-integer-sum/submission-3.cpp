class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> umap;
        // for(int i = 0; i<n; i++){
        //     umap[nums[i]] = i;
        // }
        // for(int i = 0; i<n; i++){
        //     int value_needed = target - nums[i];
        //     if(umap.find(value_needed)!=umap.end() && umap[value_needed]!=i){
        //         return {i, umap[value_needed]};
        //     }
        // }
        for(int i = 0; i < n; i++){
            int val_needed = target - nums[i];
            auto it = umap.find(val_needed);
            if(it != umap.end())
                return {it->second, i};
            umap[nums[i]] = i;
        }
        return {};
    }
};
