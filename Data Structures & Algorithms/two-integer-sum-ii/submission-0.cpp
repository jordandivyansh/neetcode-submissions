class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n - 1; i++){
            if(numbers[i]+numbers[i+1] == target){
                return {i+1, i+2};
            }
        }
        return {1,2};
    }
};
