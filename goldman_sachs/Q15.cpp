 bool canPair(vector<int> nums, int k) {
        
        int n=nums.size();
        if(n%2!=0)
        return false;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
         mp[(nums[i]%k)]++;  
        }
         for(int i=0;i<n;i++)
         {int x=nums[i]%k;
             if(mp[x])
             {
             mp[x]--;
          mp[(k-x)%k]--;
             }
         }
         for(auto i:mp)
         {
             if(i.second!=0)
             return false;
         }
         return true;
        // Code here.
    }