class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i <= nums.size() - 3; i++) {
            if (i > 0 && nums[i-1] == nums[i]) {
                continue;
            }
            int j = i+1, k = nums.size()-1;
            while(j < k) {
                int total = nums[i] + nums[j] + nums[k];
                if(total < 0){
                    j++;
                } else if(total > 0){
                    k--;
                } else {
                    result.push_back( {nums[i], nums[j], nums[k]});
                    j++;
                    while(nums[j-1] == nums[j] && j < k) j++;
                }
            }
        }
        return result;
    }
};