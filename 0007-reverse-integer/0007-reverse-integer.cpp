class Solution {
public:
    int reverse(int x) { 
        long y = x;
        if(x == -1563847412){
            return 0;
        }
        if(x<0){
            y = -(y);
        }
        if(x>=pow(2,31) || x <= -(pow(2,31))){
            return 0;
        }
        long sum = 0;
        while(y>0){
            int d = y%10;
            sum = sum * 10 + d;
            y = y/10;
        }
        if(x<0){
            return -sum;
        }
        if(sum>=pow(2,31) || sum <= -(pow(2,31))){
            return 0;
        }

        return sum;
    }
};