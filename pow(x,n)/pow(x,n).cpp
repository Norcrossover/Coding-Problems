class Solution {
public:
    double myPow(double x, int n) {
        double solution = x;
        double max = 10000;
        double min = 1/10000;
        
        if (n == 0) return 1;
        else if (x == 1) return 1; 
        else if (n > 0) {
            for (int i=1; i<n; i++) {
                //cout << solution << endl;
                if (solution > max || solution < min) return 0;
                solution *= x;
            }
            return solution;
        }
        else if (n < 0) {
            //n *= -1;
            solution = 1/x;
            for (int i=1; i<-n; i++) {
                if (solution < min) return 0;
                solution /= x;
            }
            return solution;
        };
        return 0;
    }
};
