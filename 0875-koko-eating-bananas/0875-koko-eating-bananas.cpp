class Solution {
public:
    long long countv(vector<int>arr,int x){
        long long count = 0;
        for(int i=0;i<arr.size();i++){
            count += arr[i]/x;
            if(arr[i]%x != 0) count++;
            // int hours = ceil((double)arr[i]/x);
            // count+= hours;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // int r = *max_element(piles.begin(),piles.end());
        int r =0;
        for(auto pile : piles){
        if(pile>r) r = pile;
        }
        int l = 1;
        int ans;
        while(l<=r){
            int mid = l+(r-l)/2;
            long long count = countv(piles,mid);
            if(count<=h){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1; 
            }
        }
        return ans;
    }
};