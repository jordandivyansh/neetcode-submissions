class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // priority queue O(n + mlogk) = O(nlogk)
        unordered_map<int, int> frequency;
        for(auto i : nums) {
            frequency[i]++;
        }
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int,int>>
        >minHeap;
        for(auto i:frequency){
            minHeap.push({i.second, i.first});
            if(minHeap.size()>k)
                minHeap.pop();
        }
        vector<int> ans;
        while(k--){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
