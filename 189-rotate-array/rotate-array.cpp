class Solution {
public:
    
    void swap(vector<int>& nums,int start,int end){

        while(start<=end){
            std::swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k=k%n;

        swap(nums,0,n-k-1);
        swap(nums,n-k,n-1);
        swap(nums,0,n-1);
        
    }
};