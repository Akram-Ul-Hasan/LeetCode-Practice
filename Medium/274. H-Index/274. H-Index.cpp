class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());
        int count = 0;
        while( count<citations.size() && citations[count] >= count+1) {
            count++;
        }
        return count;
    }
};