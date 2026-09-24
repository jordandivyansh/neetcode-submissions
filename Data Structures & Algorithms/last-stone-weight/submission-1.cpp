class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones.back();
        priority_queue<int> maxHeap;
        for(auto i:stones)
            maxHeap.push(i);
        while(maxHeap.size()>1){
            int current_max = maxHeap.top();
            maxHeap.pop();
            int new_max = maxHeap.top();
            maxHeap.pop();
            if(current_max == new_max)
                continue;
            else
                maxHeap.push(current_max - new_max);
        }
        if(maxHeap.size())
            return maxHeap.top();
        return 0;
        
    }
};
