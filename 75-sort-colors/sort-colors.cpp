class Solution {
public:
    void sortColors(vector<int>& nums) {

        vector<int> zero;
        vector<int> one;
        vector<int> two;

        for(int i=0;i<nums.size();i++){

            if(nums[i]==0){
                zero.push_back(0);
            }

            else if(nums[i]==1){
                one.push_back(1);
            }

            else{
                two.push_back(2);
            }
        }

        int i=0;

        for(int j=0;j<zero.size();j++){
            nums[i++]=zero[j];
        }

        for(int j=0;j<one.size();j++){
            nums[i++]=one[j];
        }

        for(int j=0;j<two.size();j++){
            nums[i++]=two[j];
        }
        
    }
};