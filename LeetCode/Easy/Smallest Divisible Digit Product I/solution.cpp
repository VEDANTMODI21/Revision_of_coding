class Solution {
public:
    int smallestNumber(int n, int t) {
        int num =1;
        for (int i = n; i <= 100; i++) {
             int temp = i;
            num = 1;
            while (temp > 0) {
                int digit = temp % 10;
                num *= digit;
                temp /= 10;

                if (num % t == 0)
                   return i;
            }
        }
        return -1;
    }
};