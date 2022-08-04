vector<int> bfs(int v,vector<int>adj)
{
    vector<int>a;
    vector<int>vis(v+1,0);
    
    for(int i=1;i<=v;i++)
    {
        queue<int>q;
        if(!vis[i])
        {
            q.push(i);
            vis[i]=1;
        while(!q.empty())
        {
            int n=q.front();
             q.pop();
            a.push_back(n);
           for(auto it:adj)
           {
               if(!vis[it])
               {
                   q.push(it);
                   vis[it]=1;
               }
           }
        }
    }
}
