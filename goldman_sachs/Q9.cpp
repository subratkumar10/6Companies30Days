class Solution{   
public:
    string printMinNumberForPattern(string S){
       int flag=0;  
        int count=0;
        map<char,int>mp;
         char x;
        string str;
        for(int i=0;i<S.length();i++)
        {   if(i==0)
            {
            x=S[i];
            str+=x;
            mp[x]++;
            continue;
             }
            if(x!=S[i])
            { char temp=mp[x]+48;
            // cout<<"hello";
            //cout<<temp<<endl;
                str+=temp;
               mp[S[i]]=1;
                 x=S[i];
                 str+=x;
            }
            else{
                mp[x]++;
            }
            
        }
        char temp='0'+mp[x];
                str+=temp;
                //cout<<str<<endl;
               // return str;
                string final;
                 count=0;
                for(int i=1;i<str.length();i+=2)
                {
                     if(str[i-1]=='D')
                     {
                        
                             int x=count;
                               x+=(str[i]-'0'+1);
                             for(int j=0;j<str[i]-'0'+1;j++)
                             {  int diff=x-j;
                                 char temp='0'+diff;
                                 final+=temp;
                             }
                             count=x;
                             flag=1;
                        
                     }
                     else
                     {  if(!flag)
                     {
                       for(int j=1;j<=str[i]-'0';j++)
                       { 
                           char temp='0'+count+1;
                           final+=temp;
                           count++;
                       }
                      
                     }
                     else{
                          for(int j=1;j<str[i]-'0';j++)
                       {
                           
                           char temp='0'+count+1;
                           final+=temp;
                           count++;
                       }
                     }
                     }
                }
                if(str[str.length()-2]=='I')
                {
                    char temp='0'+count+1;
                final+=temp;
                }
                return final;
        
      
        // code here 
    }
};