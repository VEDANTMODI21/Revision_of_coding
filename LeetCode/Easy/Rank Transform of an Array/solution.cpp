class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        int r = 1;
        vector<int> copy = arr;
        sort(copy.begin(), copy.end());
        for (int x : copy) {
            if (!mp.count(x)) {
                mp[x] = r++;
            }
        }
        vector<int> ans;
        for (int x : arr) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};