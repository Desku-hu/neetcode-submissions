class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            set<int> num(nums.begin(), nums.end());
            if (num.size()==nums.size()){
                return false;
            }
            else{
                return true;
            }
        }
};