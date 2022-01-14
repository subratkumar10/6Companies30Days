class Solution {
public:
    int dp[101];
    int find_ans(string &s,int i,int n)
    {
         if(i==n)
             return 1;
        
        
        if(dp[i]!=-1)
            return dp[i];
        if(s[i]=='0')
        {
            return dp[i]=0;
        }
        
        if(i+1<n)
        {
            int x=s[i]-'0';
            int y=s[i+1]-'0';
            int z=x*10+y;
            if(z<=26)
            {
            return dp[i]=find_ans(s,i+1,n)+find_ans(s,i+2,n);    
            }
            else{
               return dp[i]=find_ans(s,i+1,n); 
            }
        }
    return  dp[i]=find_ans(s,i+1,n);
    }
    int numDecodings(string s) {
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        
        return find_ans(s,0,n);
        
    }
};