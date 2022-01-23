class Solution{
public:
    int isValid(vector<vector<int>> mat){
        
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {      int mp[10]={0};
            for(int j=0;j<m;j++)
            { if(mat[i][j])
              mp[mat[i][j]]++;
              if(mp[mat[i][j]]>1)
              return 0;
            }
        }
          for(int j=0;j<m;j++)
        {      int mp[10]={0};
            for(int i=0;i<n;i++)
            {   if(mat[i][j])
              mp[mat[i][j]]++;
              if(mp[mat[i][j]]>1)
              return 0;
            }
        }
        int r1=0;
        int c1=0;
        while(r1<=8)
        { while(c1<=8)
        {    int mp[10]={0};
            for(int i=r1;i<(r1+3);i++)
            {
                for(int j=c1;j<(c1+3);j++)
                {   if(mat[i][j])
                  mp[mat[i][j]]++; 
                  if(mp[mat[i][j]]>1)
                  return 0;
                }
            }
            c1+=3;
        }
        c1=0;
            r1+=3;
        }
        return 1;
        // code here
    }
};