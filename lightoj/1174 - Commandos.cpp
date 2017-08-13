#include<bits/stdc++.h>

using namespace std;
  vector<int>Edge[102];
void bfs(int sor,int dis[])
{
    queue<int>q;
    q.push(sor);
    bool vis[101];
    memset(dis,0,sizeof(dis));
    memset(vis,false,sizeof(vis));
    while(!q.empty())
    {
       int to=q.front();
       q.pop();
       if(vis[to])continue;
       vis[to]=true;

       for(int i=0;i<Edge[to].size();i++)
       {
          if(!vis[Edge[to][i]])
          {
            dis[Edge[to][i]]=dis[to]+1;
            q.push(Edge[to][i]);


          }


       }



    }




}
int main()
{
    int t=1,T;
    scanf("%d",&T);
    while(t<=T)
    {
       int N,R,s,d;
       scanf("%d %d",&N,&R);

     for(int i=0;i<R;i++)
    { int u,v;
       scanf("%d %d",&u,&v);
       Edge[u].push_back(v);
       Edge[v].push_back(u);


    }
    scanf("%d %d",&s,&d);
    int dis[101],dis1[101];
   // memset(dis,0,sizeof(dis));
    //memset(dis1,0,sizeof(dis1));
    bfs(s,dis);
    bfs(d,dis1);
    int ans=0;
    for(int i=0;i<N;i++)
     {
      ans=max(ans,dis[i]+dis1[i]);
      Edge[i].clear();

     }
    printf("Case %d: %d\n",t,ans);

    t++;



    }

}
