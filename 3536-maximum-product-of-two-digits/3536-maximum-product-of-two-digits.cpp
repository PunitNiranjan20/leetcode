class Solution {
public:
    int maxProduct(int n) {
        int x=0,y=0;
        while(n>0){
            int d = n%10;
            if(d>x){
                y = x;
                x = d;
            }
            else if(d>=y){
                y = d;
            }
            n/=10;
        }
        return x*y;
    }
};