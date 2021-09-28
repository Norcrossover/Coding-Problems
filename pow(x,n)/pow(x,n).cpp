class Solution {
public:
    double myPow(double x, int n) {
        double solution = x;
        double max = 1000000;
        double min = 1/10000;
        
        if (n == 0) return 1;
        else if (n > max && x > 1) return 0;
        else if (x > max) return 0;
        else if (n > 0) {
            cout << "n > 0" << endl;
            if (x == 1) {
                cout << "returned 1";
                return 1; 
            }
            for (int i = 1; i < n; i++) {
                //cout << solution << endl;
                if (solution > max || (solution < min && solution > 0)) {
                    cout << "returned 0" << endl;
                    return 0;
                }
                solution *= x;
            }
            cout << solution << endl;
            return solution;
        }
        else if (n < 0) {
            //n *= -1;
            double check = n * -1.0;
            if (x == 1) return 1;
            cout << "n < 0" << endl;
            solution = 1/x;
            if (check > max) return 0;
            for (int i = 1; i < -n; i++) {
                if (solution < min) return 0;
                solution /= x;
            }
            cout << solution << endl;
            return solution;
        };
        return 0;
    }
};
