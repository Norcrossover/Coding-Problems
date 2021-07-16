class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0; // reversed number
        if (x < 0) x *= -1; // make x positive if it is negative
        while (x!=0) {
            y = x%10;
            x /= 10;
            y *= 10;
        }
        if (x == y) return true;
        return false;
    }
};