class Solution {
public:
    int maxSubArray(vector<int>& nums) {
int sum = nums[0];
        int curr = nums[0];
        for(int i=1;i<nums.size();i++){
            if(curr<0){
                 curr = nums[i];
            }else{
                curr+=nums[i];
            }
            sum = max(curr, sum);
            
        }
        return sum;
    }
};



