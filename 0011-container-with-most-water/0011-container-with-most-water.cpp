class Solution {
public:
    int maxArea(vector<int>& h) {
        int max1 = 0;
        int j = h.size()-1;
        for(int i=0;i<j;){
                int x = min(h[i],h[j]);
                if(max1<(j-i)*x){
                    max1 = (j-i)*x;
                }
                if(h[i]<h[j]){
                    i++;
                }else{
                    j--;
                }
            }
        return max1;
    }
};