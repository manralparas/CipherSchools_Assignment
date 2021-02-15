class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int l = 0,r = n-1;
        int ans = 0;
        int left_max= 0;
        int right_max= 0;
        while(l<=r)
        {
           if(height[l]<=height[r])
           {
              if(height[l]>left_max)
              { 
                  left_max = height[l];
                   l++; 
               }
               else{
                   ans+=(left_max-height[l]);
                   l++;
               }
           }
            else{
               if(height[r]>right_max)
               {
                  right_max=height[r];
                   r--;
                   
               }
                else{
                    
                    ans+=(right_max-height[r]);
                    r--;
                }
                
            }
            
        }
        return ans;
        
    }
};
