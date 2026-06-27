class Solution {
public:
    void help(vector<int>& nums,int left,int right)
    {
        while(left<=right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n)k=k%n;
        help(nums,0,n-1);
        help(nums,0,k-1);
        help(nums,k,n-1);
    }
};