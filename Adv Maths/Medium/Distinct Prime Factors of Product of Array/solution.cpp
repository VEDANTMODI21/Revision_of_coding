class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> mp;

        for (int n : nums) {

            for (int i = 2; i * i <= n; i++) {

                while (n % i == 0) {
                    mp.insert(i);
                    n /= i;
                }
            }

            if (n > 1) {
                mp.insert(n);
            }
        }

        return mp.size();
    }
};