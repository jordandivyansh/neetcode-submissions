class Solution {
public:
    int maxArea(vector<int>& heights) {
        int water = 0;
        int n = heights.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int capacity = min(heights[i],heights[j])*(j-i);
                // cout << i << "  "<< j <<".   ."<<capacity<<endl;
                water = max(water, capacity);
            }
        }
        return water;
    }
};
