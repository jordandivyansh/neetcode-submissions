class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax;
        vector<int> rightMax(n);
        int temp = height[0];
        for(auto i:height){
            int current = i;
            temp = max(temp, i);
            leftMax.push_back(temp);
        }
        temp = height[n-1];
        for(int i = n-1; i >= 0; i--){
            int current = height[i];
            temp = max(current, temp);
            rightMax[i] = temp;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
            ans+=(min(leftMax[i], rightMax[i]) - height[i]);
        return ans;
    }
};
