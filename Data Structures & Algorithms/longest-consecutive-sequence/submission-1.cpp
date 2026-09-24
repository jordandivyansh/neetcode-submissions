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
            int count = 1;
            for(int j = 0; j < n; j++){
                if(exists.count(val+1)){
                    count++;
                    val++;
                }
                else
                    break;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};
