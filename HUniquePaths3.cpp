class Solution {
public:
    int dir[4][2]={{0,1},{1,0},{-1,0},{0,-1}};
    int ans=0,si,sj,n,m,count=0;
    int dfs(vector<vector<int>>& grid,/*vector<vector<bool> > vis,*/int i,int j,int t)
    {
        //cout<<i<<" "<<j<<endl;
        if(i<0||j<0||j>=m||i>=n/*||vis[i][j]*/||grid[i][j]==-1)return 0; 
        if(grid[i][j]==2){return count==t;}
        //vis[i][j]=true;
        grid[i][j]=-1;
        int temp=0;
        for(int p=0;p<4;p++)
           ans+=dfs(grid,/*vis,*/i+dir[p][0],j+dir[p][1],t+1);
        //vis[i][j]=false;
        grid[i][j]=0;
        return temp; 
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
         n=grid.size();m=grid[0].size();
        //if(!n)return 0;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
            {
                int g=grid[i][j];
                if(g==1)si=i,sj=j;
                if(g!=-1)count++;
            }
        //vector<vector<bool> > vis(n,vector<bool>(m,0));
        //vector<vector<bool> > vis(3,vector<bool>(4,0));
        dfs(grid,/*vis,*/si,sj,1);
        return ans;
    }
};
/*
1 0 0
0 0 2 
vis[1]=true
dfs(1,0)
    vis[10]=true
    dfs(11,)
        vis[11]=true
+dfs(0,1)
*/
