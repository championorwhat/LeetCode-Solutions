class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x=nums1.size() + nums2.size();
        vector<int> merged(x);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),merged.begin());
        if (x % 2 == 0) {
            return (merged[(x / 2)-1] + merged[x / 2]) / 2.0;
        } else {
            return merged[x / 2.0];
        }
    }
};
