class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;
        for(auto i : nums) {
            frequency[i]++;
        }
        vector<pair<int, int>> numsSet;
        for(auto i:frequency){
            numsSet.push_back({i.second, i.first});
        }
        sort(numsSet.begin(),numsSet.end());
        vector<int> ans;
        while(k--){
            pair<int, int> temp = numsSet.back();
            ans.push_back(temp.second);
            numsSet.pop_back();
        }
        return ans;
    }
};
