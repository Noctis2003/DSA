class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
        
            for (int i = left; i <= right; i++) 
                result.push_back(matrix[top][i]);
            top++;

      
            for (int i = top; i <= bottom; i++) 
                result.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) 
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

          
            if (left <= right) {
                for (int i = bottom; i >= top; i--) 
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};



// this was quite an easy one to be solved 
// we created a top , bottom , left and right variable
// think of it as the variables pointing to the 4 corners of the matrix
// iteration 1 -- we move from right to left
// then we move down that is top --
// then  we move from top to bottom
// then we move left-- 
// you know what ? it will be easier if you just remember that there are 4 pointers and remember the spiral order in which we go
