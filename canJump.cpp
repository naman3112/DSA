class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;
        
        for (int i = 0; i < n; ++i) {
            if (i > farthest) {
                return false;  // If we can't reach this point, return false.
            }
            farthest = max(farthest, i + nums[i]);
        }
        return true;  
    }
//2 
};
