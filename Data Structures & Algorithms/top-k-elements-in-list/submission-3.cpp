class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // using bucket sort
        
        int n = nums.size();
        unordered_map<int, int> frequency;
        for(auto i : nums) {
            frequency[i]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto i:frequency){
            bucket[i.second].push_back(i.first);
        }
        vector<int> ans;
        for(int freq = n; freq>=0; freq--){
            if(!k)
                return ans;
            for(auto i : bucket[freq]){
                if(i != NULL){
                    ans.push_back(i);
                    k--;
                }
            }
        }
        return ans;
    }
};
