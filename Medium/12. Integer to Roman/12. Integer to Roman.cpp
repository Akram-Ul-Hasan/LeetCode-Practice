class Solution {
public:
    string intToRoman(int num) {
        string units[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[] = {"", "M", "MM", "MMM"};

        return thousands[num/1000] + hundreds[(num%1000)/100] + tens[(num%100)/10] + units[num%10];
    }
};