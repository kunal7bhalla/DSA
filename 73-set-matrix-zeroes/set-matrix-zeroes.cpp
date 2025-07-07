class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_set<int> zerorow;
        unordered_set<int> zerocol;


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    zerorow.insert(i);
                    zerocol.insert(j);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(zerorow.find(i)!=zerorow.end() || zerocol.find(j)!=zerocol.end()){
                    matrix[i][j]=0;
                }
            }
        }
        

    }
};