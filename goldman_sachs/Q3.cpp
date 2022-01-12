
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& nums, int n, long long k) {
        
         if(k<=1)
            return 0;
        
        
        long long prod=1;
        int j=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            while(prod>=k)
            {
              prod/=nums[j++];  
            }
            sum+=(i-j+1);
        }
        return sum;
        
    }
};