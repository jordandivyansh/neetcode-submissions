class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<bool> visited(n, false);
        for(int i = 0; i < n; i++){
            vector<string> tempAns;
            string x = strs[i];
            if(visited[i])
                continue; 
            tempAns.push_back(x);
            visited[i] = true;
            int charArray[26] = {0};
            for(auto j:x){
                charArray[j - 'a']++;
            }
            for(int k = i+1; k<n; k++){
                if(visited[k])
                    continue;
                string y = strs[k];
                int cArray[26] = {0};
                for(auto l:y){
                    cArray[l - 'a']++;
                }
                bool check = true;
                for(int m = 0; m < 26; m++){
                    if(charArray[m]!=cArray[m]){
                        check = false;
                        break;
                    }
                }
                if(check){
                    tempAns.push_back(y);
                    visited[k] = true;
                }
            }
            ans.push_back(tempAns);
        }
        return ans;
    }
};
