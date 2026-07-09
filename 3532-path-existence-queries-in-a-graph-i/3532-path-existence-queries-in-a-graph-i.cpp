class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {

        vector<int> prefix(n, 0);

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1];
            if (nums[i] - nums[i - 1] > maxDiff)
                prefix[i]++;
        }

        vector<bool> ans;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            if (l > r)
                swap(l, r);

            ans.push_back(prefix[r] - prefix[l] == 0);
        }

        return ans;
    }
};