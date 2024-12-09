class Solution {
public:
    int getSquareNumber(int num) {
        int sum = 0;
        while (num > 0) {
            sum += pow(num%10, 2);
            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int>s = {n};

        while(n != 1) {
            n = getSquareNumber(n);
            if(s.find(n) == s.end()) {
                s.insert(n);
            } else {
                return false;
            }
        }
        return true;
    }
};