class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
      
        int max_sofar=INT_MIN;
        int max_ending=0;
        for(int i=0;i<n;i++)
        {
            max_ending=max(nums[i],max_ending+nums[i]);
            max_sofar=max(max_sofar,max_ending);
        }
        return max_sofar;
        
    }
};
