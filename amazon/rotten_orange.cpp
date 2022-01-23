class Solution {
public:
    
    
    
   bool is_valid(int x,int y,vector<vector<int>>&grid)
    {
            int n=grid.size();
        int m=grid[0].size();
        if(x<0||x>=n||y<0||y>=m||grid[x][y]==0||grid[x][y]==2)
            return false;
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        
           int n=grid.size();
        int m=grid[0].size();
        int tot=0;
        int rott=0;
        int fre=0;
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(grid[i][j]==1)
               {
                   fre++;
                   tot++;
               }
                else if(grid[i][j]==2)
                {
                    rott++;
                    q.push({{i,j},0});
                    tot++;
                }
            }
        }
        vector<pair<int,int>>dir={{0,1},{0,-1},{-1,0},{1,0}};
        int max1=0;
        while(!q.empty())
        {
            pair<pair<int,int>,int>curr=q.front();
            q.pop();
            int x=curr.first.first;
            int y=curr.first.second;
            int cost=curr.second;
            max1=max(max1,cost);  
            for(int i=0;i<4;i++)
            {   int xx=x+dir[i].first;
                 int yy=y+dir[i].second;
               if(is_valid(xx,yy,grid))
               {
                 grid[xx][yy]=2;
                   q.push({{xx,yy},cost+1});
                   rott++;
               }
            }
        }
        if(rott==tot)
            return max1;
        return -1;
        
    }
};