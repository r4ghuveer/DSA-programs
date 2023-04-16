class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0){
                        matrix[0][j]=0;
                    }
                    else{
                        col=0;
                    }
                }
            }
        }
        for(int k=1;k<matrix.size();k++){
            for(int l=1;l<matrix[0].size();l++){
                if(matrix[0][l]==0 || matrix[k][0]==0){
                    matrix[k][l]=0;
                }
            }
        }
        if(matrix[0][0]==0){
            for(int y=0;y<matrix[0].size();y++){
                matrix[0][y]=0;
            }
        }
        if(col==0){
            for(int x=0;x<matrix.size();x++){
                matrix[x][0]=0;
            }
        }
        
    }
};