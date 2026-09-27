class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int p1 = 0, p2 = 0;
        int ans = 0;
        unordered_map<char, int> umap; // max 128 size. S = O(128)
        while(p2 < n){
            umap[s[p2]]++;
            if(umap.size() == p2-p1+1){
                ans = max(ans, p2-p1+1);
            }
            else if(umap.size() < p2-p1+1){
                while(umap.size() < p2-p1+1){
                    umap[s[p1]]--;
                    if(umap[s[p1]]==0)
                        umap.erase(s[p1]);
                    p1++;
                }
            }
            p2++;
        }
        return ans;
    }
};
