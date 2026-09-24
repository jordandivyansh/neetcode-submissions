class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_set<int> exists;
        for(auto i:nums){
            exists.insert(i);
        }
        for(int i = 0; i < n; i++){
            int val = nums[i];
            if(exists.count(val-1))
                continue;
            int count = 1;
            while(exists.count(val+1)){
                count++;
                val++;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};
