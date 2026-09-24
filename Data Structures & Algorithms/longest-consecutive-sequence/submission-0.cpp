class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int val = nums[i];
            int count = 1;
            for(int j = 0; j < n; j++){
                auto it = find(nums.begin(), nums.end(),val+1); 
                if(it != nums.end()){
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
