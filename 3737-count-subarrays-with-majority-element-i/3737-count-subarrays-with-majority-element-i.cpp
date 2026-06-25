class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;

        for (int l = 0; l < n; l++) {
            int freq = 0;

            for (int r = l; r < n; r++) {
                if (nums[r] == target)
                    freq++;

                if (2 * freq > (r - l + 1))
                    ans++;
            }
        }

        return ans;
    }
};