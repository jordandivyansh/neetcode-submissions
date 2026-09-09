class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> ans;
        int n = strs.size();
        for(int i = 0; i < n; i++){
            string x = strs[i];
            string s = "";
            int charArray[26] = {0};
            for(auto j:x)
                charArray[j-'a']++;
            for(int i = 0; i < 26; i++){
                s+=to_string(charArray[i]);
                s+='#';
            }
            umap[s].push_back(x);
        }
        for(auto i:umap){
            ans.push_back(i.second);
        }
        return ans;
    }
};
