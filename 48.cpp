/*
    题意：将一个矩阵顺时针旋转90度
    解法：画个图，4个一组交换，实际交换只需要交换左上角的一个小矩形matrix[n/2][(n+1)/2];
*/
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        int n = matrix.size();
        for(int i = 0 ; i < n/2 ; i++){
            for(int j = 0 ; j < (n+1)/2 ; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n-j-1][i];
                matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                matrix[j][n-i-1] = temp;
            }
        }
        return ;
    }
};