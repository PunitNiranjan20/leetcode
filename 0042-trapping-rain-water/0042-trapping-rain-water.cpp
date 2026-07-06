class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0,right = height.size()-1,maxL = height[left],maxR = height[right];
        int water = 0;
        while(left<right){
            if(maxL<maxR){
                left++;
                maxL = max(maxL,height[left]);
                water += maxL-height[left];
            }else{
                right--;
                maxR = max(maxR,height[right]);
                water += maxR - height[right];
            }
        }
        return water;
    }
};