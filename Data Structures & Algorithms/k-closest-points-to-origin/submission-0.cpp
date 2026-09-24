class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<float, vector<int>>> maxHeap;
        for(int i = 0; i < points.size(); i++){
            int xC = points[i][0];
            int yC = points[i][1];
            float distance = sqrt( xC*xC + yC*yC);
            maxHeap.push({distance, {xC, yC}});
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        vector<vector<int>> ans;
        while(maxHeap.size()){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};
