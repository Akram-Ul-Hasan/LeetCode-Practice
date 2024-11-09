class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;
        int lastJumped = 0;
        int jump = 0;

        for (int i = 0; lastJumped < n-1; i++) {
            maxReach = max(maxReach, i + nums[i]);
            if(i == lastJumped) {
                lastJumped = maxReach;
                jump++;
            }
        }
        return jump;
    }
};
