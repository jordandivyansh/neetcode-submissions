class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency;

        for(auto i : nums) {
            frequency[i]++;
        }

        vector<pair<int,int>> vp;

        for(auto i : frequency) {
            vp.push_back({i.first, i.second});
        }

        sort(vp.begin(), vp.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(vp[i].first);
        }

        return ans;
    }
};