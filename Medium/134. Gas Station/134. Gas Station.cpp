class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int startGas = 0;
        int start = 0;
        
        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i] - cost[i];
            startGas += gas[i] - cost[i];
            if (startGas < 0) {
                startGas = 0;
                start = i+1; //as this will not enter for valid starting point. so add 1;
            }
        }
        return totalGas < 0 ? -1 : start;
    }
};