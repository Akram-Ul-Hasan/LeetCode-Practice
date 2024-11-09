class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority = 0;

        for (auto& num : nums) {
            if (count == 0) {
                majority = num;
            }
            if (majority == num) {
                count++;
            } else {
                count--;
            }
        }
        return majority;
    }
};