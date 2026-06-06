class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> dic;
        for(const auto& word:strs){
            string w=word;
            sort(w.begin(),w.end());
            dic[w].push_back(word);
        }
        vector<vector<string>> res;
        for(auto& kv:dic){
            res.emplace_back(kv.second);
        }
        return res;

    }
};
