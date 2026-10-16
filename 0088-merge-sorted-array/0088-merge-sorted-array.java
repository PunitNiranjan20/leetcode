class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int ind = nums1.length-1;
        while(m>0 && n>0){
            if(nums1[m-1]<nums2[n-1]){
                n--;
                nums1[ind--] = nums2[n];
            }else{
                m--;
                nums1[ind--] = nums1[m];
            }
        }
        while(n>0){
            n--;
            nums1[ind--] = nums2[n];
        }
    }
}