class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        
        int sum=arr[0];
        int temp=0;
        
        for(int i=0;i<arr.size();i++){
            temp+=arr[i];
            
            sum=max(sum,temp);
            
            if(temp<0){
                temp=0;
            }
        }
        
        return sum;
    }
};