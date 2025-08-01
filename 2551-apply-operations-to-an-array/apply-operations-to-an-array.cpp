class Solution {
public:

    void zeroend(vector<int>& nums){

        int j=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }

        }

    }
    vector<int> applyOperations(vector<int>& nums) {

        int n=nums.size();

        for(int i=0;i<n-1;i++){

            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }

        zeroend(nums);

        return nums;
        
    }
};