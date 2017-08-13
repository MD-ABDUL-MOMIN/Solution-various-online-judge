#include<bits/stdc++.h>

using namespace std;

int main()
{
   int t=1,T;
   scanf("%d",&T);
   while(t<=T)
   {//printf("\n\n");
   vector<int>Edge[1002];
    int N,E;
    scanf("%d %d",&N,&E);
    int we[N+2][N+2];
    memset(we,0,sizeof(we));
    for(int i=1;i<=E;i++)
    { int u,v,w;
    scanf("%d%d%d",&u,&v,&w);


     if(we[u][v])
     {
      we[u][v]=min(we[u][v],w);
     we[v][u]=min(we[u][v],w);


     }
     else {we[u][v]=w;
         we[v][u]=w;
        Edge[u].push_back(v);
     Edge[v].push_back(u);
}
     //Mymap[make_pair(u,v)]=w;//

    }

   priority_queue< pair<long long int,int> >q;
  long long int di[N+3];
    q.push(make_pair(0,1));
    for(int i=1;i<=N;i++) di[i]=1e10;
    bool vis[N+3];
    di[1]=0;
    memset(vis,0,sizeof(vis));
    while(!q.empty())
    {

     int to=q.top().second;
    // cout<<q.top().first<<endl;
     q.pop();
     if(vis[to])continue;
     vis[to]=true;
     for(int i=0;i<Edge[to].size();i++)
      {
        if(di[to]+we[to][Edge[to][i]]<di[Edge[to][i]])
        {
        // cout<<di[to]<<endl;

               di[Edge[to][i]]=di[to]+we[to][Edge[to][i]];

         q.push({-di[Edge[to][i]],Edge[to][i]});

        }



      }



    }
    if(di[N]!=1e10)
    printf("Case %d: %lld\n",t,di[N]);
    else printf("Case %d: Impossible\n",t);
    t++;
    //cout<<di[N]<<endl;




   }




}
