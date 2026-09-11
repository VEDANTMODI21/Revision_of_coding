class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> s;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (i == j || j == k || k == i)
                        continue;
                    if (digits[i] == 0)
                        continue;
                    if (digits[k] % 2 != 0)
                        continue;
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    s.push_back(num);
                }
            }
        }
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        return s;
    }
};