 int *findTwoElement(int *arr, int n) {
        
        map<long long,long long>mp;
        int *res=new int[2];
   
        long long sum=0;
        for(int i=0;i<n;i++)
        {  
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
            res[0]=arr[i];
            sum+=arr[i];
        }
        long long x=(long long)n;
        long long sum1=x*(x+1)/2;
             
               res[1]=res[0]+sum1-sum;  
              return res;
    
        // code here
    }
};