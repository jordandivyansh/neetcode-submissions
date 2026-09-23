class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        signed long product = 1;
        signed long nonZeroProduct = 1;
        int zeroCount = 0;
        for(auto i:nums){
            product*=i;
            if(i == 0)
                zeroCount++;
            else
            nonZeroProduct*=i;
        }
            
        vector<int> ans;
        for(auto i:nums){
            if(i == 0 && zeroCount == 1)
                ans.push_back(nonZeroProduct);    
            else if(i == 0 && zeroCount >= 1)
                ans.push_back(0);
            else
                ans.push_back(product / i);
        }
        return ans;
    }
};
