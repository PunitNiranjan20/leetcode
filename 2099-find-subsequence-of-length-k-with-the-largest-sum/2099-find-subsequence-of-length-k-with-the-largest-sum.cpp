#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> maxSubsequence(std::vector<int>& nums, int k) {
        int n = nums.size();
        // Store value and index
        std::vector<std::pair<int, int>> v;
        for (int i = 0; i < n; ++i) {
            v.push_back({nums[i], i});
        }
        
        // Sort by value descending
        std::sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });
        
        // Take the top k elements
        std::vector<std::pair<int, int>> topK(v.begin(), v.begin() + k);
        
        // Sort by original index to maintain subsequence order
        std::sort(topK.begin(), topK.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        
        // Construct the final result
        std::vector<int> result;
        for (const auto& p : topK) {
            result.push_back(p.first);
        }
        
        return result;
    }
};