class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        
        sort(contact,contact+n);
        int l=s.length();
        vector<vector<string>>res(l);
        string pre;
        for(int i=0;i<s.length();i++)
        {
            pre+=s[i];
            int flag=0;
              unordered_map<string,int>mp;
            for(int j=0;j<n;j++)
            {  
                if(pre==contact[j].substr(0,i+1))
                {   if(mp[contact[j]])
                  continue;
                  mp[contact[j]]=1;
                  res[i].push_back(contact[j]);
                  flag=1;
                }
            }
            if(!flag)
            {
                res[i].push_back("0");
            }
            
        }
        return res;
        // code here
    }
};