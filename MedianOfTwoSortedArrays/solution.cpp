class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double val = 0;
        //vector<int>nums3;           // combination of nums1 and nums2
        int m = nums1.size(), n = nums2.size(), totalVals = m + n, sum = 0;
        /*
        for (int i=0; i < totalVals; i++) {
            if (i < m) sum += nums1[i];
            if (i < n) sum += nums2[i];
        }
        val = sum / totalVals;
        */
        if (m == 0 || n == 0) {
            if (m == 0) {
                cout << "n: " << n << " m: " << m << endl;
                return n; 
            }
            else if (n==0) {
                cout << "m: " << m << " n: " << n << endl;
                return m;
            }
            else {
                cout << "m: " << m << " n: " << n << endl;
                return 0;
            }
        }
        else if (m % 2 == 0 && n % 2 == 0) {
            //cout << nums1[m-1] << endl << nums2[0] << endl;
            val = (nums1[m-1]+nums2[0]);
            val /= 2.0;
            //cout << val << endl;
        }
        else if (m % 2 == 1 && n % 2 == 0) {
            val = (nums1[m-2]);
        }
        else if (m % 2 == 0 && n % 2 == 1) {
            val = (nums2[n-1]);
        }
        else {
            val = (nums1[m-1]+nums2[n-1])/2.0;
        }
        return val;
    }
};