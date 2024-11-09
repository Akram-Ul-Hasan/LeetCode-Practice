#include <vector>
using namespace std;

namespace RemoveElementNS {
   
    class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int pos = 0;
            for (auto& num: nums) {
                if (num != val) {
                    nums[pos++] = num;
                }
            }
            return pos;
        }
    };
    
}
