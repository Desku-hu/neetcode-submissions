class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            unordered_set<int> num(nums.begin(), nums.end());
            if (num.size()==nums.size()){
                return false;
            }
            else{
                return true;
            }
        }
};