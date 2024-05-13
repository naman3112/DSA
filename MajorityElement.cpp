class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int leader = nums[0]; //leader possible or not 
            int votes = 1;
        for(int i=1;i<nums.size();i++){
            //leader - 6 ,5 ,5 
            //leade- 6
                if(nums[i]==leader){
                    votes++;
                }else if(votes==0){
                    votes=1;
                    leader = nums[i];
                }else {
                    votes--;                    
                    //votes=1;
                }
        }
        return leader;
    }
};
[2,2,1,1,1];

vote - 1
vote - 2
vote - 1
vote - 0
leader - 1
vote - 1



