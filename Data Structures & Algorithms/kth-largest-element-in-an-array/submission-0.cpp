class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        k--;
        while(k--)
            nums.pop_back();
        return nums.back();        
    }
};
