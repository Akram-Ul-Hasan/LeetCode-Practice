class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size() - 1;
        int current = nums.size() - 2;

        while (current >= 0) {
            if (current + nums[current] >= last) {
                last = current;
            }
            current --;
        }
        return !last;
    }
};