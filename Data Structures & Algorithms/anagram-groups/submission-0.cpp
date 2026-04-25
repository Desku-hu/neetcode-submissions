class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, list<string>> solution;
        for(int i=0; i<strs.size(); i++){
            string cur = strs[i];
            sort(cur.begin(), cur.end());
            solution[cur].push_back(strs[i]);
        }
        vector<vector<string>> solutions;
        for (auto&[key, lst]: solution){
            solutions.emplace_back(lst.begin(), lst.end());
        }
        return solutions;
        }
};
