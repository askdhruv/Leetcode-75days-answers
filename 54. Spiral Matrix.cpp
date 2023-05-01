class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if(m == 0) return {};
        int n = matrix[0].size();
        if(n == 0) return {};

        vector<int> dirs = {0, 1, 0, -1, 0};
        vector<int> limits = {n-1, m-1, 0, 0};
        int dir = 0;
        vector<int> ans;
        int r = 0, c = 0;
        int k = m*n;
        
        while(k-- > 0){
            
            ans.push_back(matrix[r][c]);
            
            if(r + dirs[dir] < limits[3] || 
               r + dirs[dir] > limits[1] || 
               c + dirs[dir+1] < limits[2] || 
               c + dirs[dir+1] > limits[0]){

                limits[(dir+4-1)%4] += ((dir+4-1)%4 < 2) ? -1 : 1;

                dir = (dir+1)%4;

            }
            
            r += dirs[dir];
            c += dirs[dir+1];
        }
                          
        return ans;
    }
};
