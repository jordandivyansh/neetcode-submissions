class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, int> frequency;
        vector<vector<int>> ans;
        set<vector<int>> unique;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            frequency[nums[i]]++;
        }
        for(int i = 0; i < n; i++){
            int val1 = nums[i];
            frequency[val1]--;
            for(int j = i+1; j < n; j++){
                int val2 = nums[j];
                frequency[val2]--;
                int val3 = -(val1+val2);
                if(frequency.find(val3)!=frequency.end() && frequency[val3] > 0){
                    vector<int> temp = {val1, val2, val3};
                    sort(temp.begin(), temp.end());
                    unique.insert(temp);
                }
                frequency[val2]++;
            }
            frequency[val1]++;
        }
        for(auto i:unique)
            ans.push_back(i);
        return ans;
    }
};
