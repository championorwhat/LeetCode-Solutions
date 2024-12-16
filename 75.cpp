class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>zero;
        vector<int>one;
        vector<int>two;
        vector<int>add;
        int x;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero.push_back(nums[i]);
                continue;
            }
            else if(nums[i]==1){
                one.push_back(nums[i]);
                continue;
            }
            else{
                two.push_back(nums[i]);
            }
        }
        add.insert(add.end(),zero.begin(),zero.end());
        add.insert(add.end(),one.begin(),one.end());
        add.insert(add.end(),two.begin(),two.end());
        nums=add;
    }
};
