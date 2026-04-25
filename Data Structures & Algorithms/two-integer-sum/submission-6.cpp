class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> num;
        vector<int>::iterator m = nums.end();
        for(int i=0; i<nums.size()-1; i++){
            m = find(nums.begin(), nums.end(), target-nums[i]);
            if(m!=nums.end()){
                int ii = m-(nums.begin());
                if(ii!=i){
                    cout << ii << " " << i;
                    i<ii ? num = {i, ii} : num = {ii, i};
                    break;
                }
            }
        }
        if(num[0]==num[1]){
            auto z = find(m+1, nums.end(), nums[num[0]]);
            int zz = z-nums.begin();
            return vector<int>{num[0], zz};
        }
        else{
            return num;
        }


    }
};
