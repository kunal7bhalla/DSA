class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        
        vector<int> positive;
        vector<int> negative;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]<0){
                negative.push_back(arr[i]);
            }
            else{
                positive.push_back(arr[i]);
            }
        }
        
        int index=0;
        for(int i=0;i<positive.size();i++){
            arr[index++]=positive[i];
        }
        
        for(int i=0;i<negative.size();i++){
            arr[index++]=negative[i];
        }
        
    }
};