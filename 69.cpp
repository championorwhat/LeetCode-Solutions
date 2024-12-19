class Solution {
public:
    int mySqrt(int x) {
        int s = 0, e = x;
        long long int mid = s + (e - s) / 2, y = -1;
        while (s <= e) {
            if ((mid * mid) == x) {
                return mid;
            } else if ((mid * mid) < x) {
                y = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return y;
    }
};
