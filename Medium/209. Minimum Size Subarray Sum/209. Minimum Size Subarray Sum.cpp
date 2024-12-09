class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX, sum = 0;

        int p1 = 0, p2 = 0;
        while(p2 < nums.size()) {
            sum += nums[p2++];
            while(sum >= target) {
                minLen = min(minLen, p2 - p1);
                sum -= nums[p1++];
            }
        }
        return minLen == INT_MAX? 0 : minLen;
    }
};