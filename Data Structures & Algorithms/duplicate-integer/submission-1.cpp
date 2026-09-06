class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> umap;
        for(int i = 0; i < n; i++){
            if(umap[nums[i]]!=0)
                return true;
            umap[nums[i]] = 1;
        }
        return false;
    }
};