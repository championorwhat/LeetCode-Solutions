class Solution {
public:
    double myPow(double x, int n) {
        int w;
        if(n<0 && n>INT_MIN){
            w=abs(n);
            return 1/pow(x,w);
        }
        else{
            return pow(x,n);
        }
    }
};
