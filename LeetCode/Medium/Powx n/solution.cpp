class Solution {
public:
    double myPow(double x, int n) {
        
        long long N = n;
        double ans = 1;

        if (N < 0) {
            x = 1 / x;  // x^(-n) = 1 / x^n
            
           
            N = -N;  // Make power positive
        }

        while (N > 0) {

            if (N % 2 == 1) {  // If N is odd, multiply current x into answer
                ans = ans * x;
            }

            x = x * x;   // Square x for the next power

            N = N / 2; // divide power by 2
        }

        return ans;
    }
};