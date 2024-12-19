class Solution {
public:
    int divide(int dividend, int divisor) {
        int w,a,b;
        if(dividend == INT_MIN && divisor==-1){
            return INT_MAX;
        }
        else if(divisor<0 && divisor<INT_MAX && divisor>INT_MIN){
            w=abs(divisor);
            return -(dividend/w);
        }
        else{
            return dividend/divisor;
        }
    }
};
