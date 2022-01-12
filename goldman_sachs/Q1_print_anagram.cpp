
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
         int n=string_list.size();
        
        map<string,int>mp;
        vector<vector<string>>v(n);
        
        for(int i=0;i<string_list.size();i++)
        {   string x=string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            if(!mp[string_list[i]])
            {
                mp[string_list[i]]=i+1;
                v[i].push_back(x);
            }
            else{
                v[mp[string_list[i]]-1].push_back(x);
            }
        }
         vector<vector<string>>result;
         
         for(auto i:v)
         {
             if(i.size()==0)
             continue;
             else result.push_back(i);
         }
         return result;
        
        //code here
    }
};