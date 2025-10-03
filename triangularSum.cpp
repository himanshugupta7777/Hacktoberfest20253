class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        
        while(nums.size()>1){
            vector<int>result;
        for(int i=1;i<nums.size();i++){
            int ans=nums[i]+nums[i-1];
            result.push_back(ans%10);
            
        }
            nums=result;
        }
        return nums[0];
        
    }
};
