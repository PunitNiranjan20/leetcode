class Solution {
public:
    int minOperations(vector<int>& nums) {
        int iter = 0;
        int sum = 0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i] == 0){
                nums[i] = !nums[i];
                nums[i+1] = !nums[i+1];
                nums[i+2] = !nums[i+2];
                iter++;
            }
        }
        for(int i=0;i<nums.size();i++)sum+=nums[i];
       return sum == nums.size() ? iter : -1;
    }
};