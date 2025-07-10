class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int> ans;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }
};