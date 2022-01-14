class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int i=0;
        int j=0;
        int min1=INT_MAX;
        while(i<n)
        {
           while(i<n&&sum<target)
           {
               sum+=nums[i++];
           }
            i--;
            while(j<=i&&sum>=target)
            {
                 min1=min(min1,i-j+1);
                  sum-=nums[j];
                j++;
            }
            i++;
        }
        if(min1==INT_MAX)
            return 0;
        return min1;
   
        
    }
};