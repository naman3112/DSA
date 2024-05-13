class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int leader1 = nums[0]; int leader2;
        int vote1 = 1;         int vote2 = 0;
        int n = nums.size();
        for(int i=1;i<nums.size();i++){
            if(nums[i]==leader1){
                vote1++;
            }else if(nums[i]==leader2){
                vote2++;
            }else if (vote1==0){
                leader1 = nums[i];
                vote1=1;
            }else if(vote2==0){
                leader2 = nums[i];
                vote2=1;
            }else if(nums[i]!=leader1 && nums[i]!=leader2){
                vote1--;
                vote2--;
            }
        }
        // cout<<"potential leader 1"<<leader1<<"potential leader 2 "<<leader2<<endl;
// 2 element majority potential majority element 
        // actual counting 
vote1=0; vote2=0;
for(int i=0;i<nums.size();i++){
    if(leader1==nums[i]){
        vote1++;
    }
    if(leader2==nums[i]){
        vote2++;
    }
    
}
    vector<int> ans;
    if(vote1>n/3){
        ans.push_back(leader1);
    }
    if(vote2>n/3){
        ans.push_back(leader2);
    }

return ans;
        
    }
};
