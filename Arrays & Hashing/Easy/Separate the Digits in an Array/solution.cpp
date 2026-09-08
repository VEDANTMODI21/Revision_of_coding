class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> mp;

        for (int num : nums) {
            vector<int> temp;

            while (num > 0) {
                int digit = num % 10;
                temp.push_back(digit);
                num /= 10;
            }

            reverse(temp.begin(), temp.end());

            for (int digit : temp) {
                mp.push_back(digit);
            }
        }

        return mp;
    }
};