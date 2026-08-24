class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int ori = n;
        int r = 0;
        while (n > 0) {
            int digit = n % 10;
            r = r * 10 + digit;
            n /= 10;
        }
        int sum = 0;
        for (int num = min(ori, r); num <= max(ori, r); num++) {
            if (num < 2)
                continue;
            bool prime = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime) {
                sum += num;
            }
        }
        return sum;
    }
};