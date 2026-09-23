class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for(auto i : strs){
            str += to_string(i.length());
            str+='#';
            str+=i;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        int n = s.length();
        while(i < n){
            int j = i;
            while(j<n && s[j]!= '#')
                j++;
            string strLen = s.substr(i, j-i);
            int size = stoi(strLen);
            string strAns = s.substr(j+1, size);
            ans.push_back(strAns);
            i = j + 1 + size;
        }
        return ans;
    }
};
