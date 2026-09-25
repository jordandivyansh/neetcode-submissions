class Solution {
public:
    int maxArea(vector<int>& heights) {
        int water = 0;
        int j = heights.size() - 1;
        int i = 0;
        while(i < j){
            int capacity = min(heights[i],heights[j])*(j-i);
            water = max(water, capacity);
            if(heights[i] < heights[j])
                i++;
            else
                j--;
        }
        return water;
    }
};
