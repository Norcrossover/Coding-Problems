#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int revNum = 0;
        int maxSize = 2;
        for (int i = 0; i < 29; i++) {
            maxSize *= 2;
        }
    
        int len = 0, y = x;
        while (y > 0) {
            len++;
            //cout << y << " " << x << endl;
            y /= 10;
        }
        //cout << len;
        //while (x > 0) {
        for (int i = 0; i < (len); i++) {
            cout << "x: " << x << "\t revNum: " << revNum << endl;
            if ((x >= maxSize) || (x <= -maxSize)) return 0;
            revNum = (revNum * 10) + (x % 10);
            x /= 10;
            cout << "x: " << x << "\t revNum: " << revNum << endl;
        }
        if (x < 0) {
            revNum *= -1;
        }
        cout << revNum;
        return revNum;
    }
};