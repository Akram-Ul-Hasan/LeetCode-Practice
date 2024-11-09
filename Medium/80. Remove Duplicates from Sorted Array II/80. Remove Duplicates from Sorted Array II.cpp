class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, j = 1;
        while(j < nums.size()) {
            if (i == 1 || nums[i - 2] != nums[j]) {
                nums[i++] = nums[j];
            }
            j++;
        }
        return i;
    }
};