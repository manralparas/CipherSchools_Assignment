class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        if(m==0)
            return false;
        int n=matrix[0].size();
        int high =m*n-1;
        int low=0;
        
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(target==matrix[mid/n][mid%n])
            return true;
            else if(target>matrix[mid/n][mid%n])
                low=mid+1;
            else
                high=mid-1;
            
        }       
        return false;
      }
};
