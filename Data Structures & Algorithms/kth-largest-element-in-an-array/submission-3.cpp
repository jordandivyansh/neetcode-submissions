class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // quick select, Average - O(n), worst O(n^2)
        int n = nums.size();
        k = n-k;
        return quickSelect(nums, 0, n-1, k);        
    }
    int quickSelect(vector<int>&nums, int left, int right, int k){
        int pivot = nums[right];
        int pointer = left;
        for(int i = left; i < right; i++){
            if(nums[i] <= pivot){
                swap(nums[i], nums[pointer]);
                pointer++;
            }
        }
        swap(nums[pointer], nums[right]);
        if(pointer==k)
            return nums[pointer];
        else if(pointer < k)
            return quickSelect(nums, pointer + 1, right, k);
        else
            return quickSelect(nums, left, pointer - 1, k);
    }
};
