class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int x=0;x<matrix.size();x++){
            for(int y=0;y<=x;y++){
                swap(matrix[x][y],matrix[y][x]);
            }
        }
        for(int x=0;x<matrix.size();x++){
            reverse(matrix[x].begin(), matrix[x].end());
        }
    }
};