class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        
        int zeros=0;
        int ones=0;
        int twos=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zeros++;
            }
            else if(arr[i]==1){
                ones++;
            }
            else{
                twos++;
            }
        }
        
        int i=0;
        
        while(zeros--){
            arr[i]=0;
            i++;
        }
        
        while(ones--){
            arr[i]=1;
            i++;
        }
        
        while(twos--){
            arr[i]=2;
            i++;
        }
    }
};