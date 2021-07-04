#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long revNum = 0;
        // iterate through x at each decimal place
        while (x != 0) {
            // the current dig will be derived by taking x mod 10 because the value is between 0 and 9
            int currDig = x % 10;
            // divide it by 10 to iterate to the next decimal place
            x /= 10;
            // check if the reverse number * 10 will be greater than the max integer value or if it is above the max val
            if (revNum > INT_MAX/10 || (revNum == INT_MAX/10 && currDig > 7)) return 0;
            // same as everything in the last statement except for the negative max (min)
            if (revNum < INT_MIN/10 || (revNum == INT_MIN/10 && currDig < -8)) return 0;
            // append the current digit to the reversed number by adding a decimal place and adding it to the number
            revNum = revNum*10 + currDig;
        }
        return revNum;
    }
};