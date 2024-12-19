class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> vec;
        int ans=0;
        int x=nums.size();
        for(int i=0;i<x;i++){
            bool z=false;
            for(int j=0;j<ans;j++){
                if(nums[i]==nums[j]){
                    z=true;
                    break;
                }
            }
            if(!z){
                nums[ans]=nums[i];
                ans++;
            }
        }
        nums.resize(ans);
        return ans;
    }
};
