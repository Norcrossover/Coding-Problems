class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0; // reversed number
        /*
        cout << "x % 9 = " << (x % 9) << endl;
        cout << "x % 10 = " << (copy % 10) << endl;
        */
        if (x < 0) x *= -1; // make x positive if it is negative
        int copy = x; 
        
         while (x) {
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
            y += x % 10;
            x /= 10;
            if (x) y *= 10;
        }
        
        cout << "x: " << x << endl;
        //cout << "copy: " << copy << endl;
        cout << "y: " << y << endl;
        
        if (y < 0) y *= -1;
        if (copy == y) return true;
        return false;
    }
};