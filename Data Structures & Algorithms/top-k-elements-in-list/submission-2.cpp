class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // using bucket sort

        unordered_map<int, int> frequency;
        for(auto i : nums) {
            frequency[i]++;
        }
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        for(auto i:frequency){
            arr[i.second] = i.first;
        }
        vector<int> ans;
        while(k--){
            ans.push_back(arr[n-1]);
            n--;
        }
        return ans;
    }
};
