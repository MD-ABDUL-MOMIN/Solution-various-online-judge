#include<bits/stdc++.h>

using namespace std;

priority_queue< pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >M;
priority_queue<pair<int,int> > N;
vector<int>Edge[102];
#define mk make_pair
int main()
{
  int t=1,T;
  scanf("%d",&T);
  int n,ed,u,v,w;
  int dis1[101][101];
  int dis2[101][101];

  while(t<=T)
  {  memset(dis1,-1,sizeof(dis1));
  memset(dis2,-1,sizeof(dis2));
    scanf("%d",&n);


    while(scanf("%d%d%d",&u,&v,&w)==3)
    {
      if(u==0&&v==0&&w==0)break;
     Edge[u].push_back(v);
     Edge[v].push_back(u);
     if(dis1[u][v]==-1)
     { dis1[u][v]=w;
     dis1[v][u]=w;
     dis2[u][v]=w;
     dis2[v][u]=w;
     }
     else {
           dis1[u][v]=min(dis1[u][v],w);
           dis2[u][v]=max(dis2[u][v],w);
           dis1[v][u]=dis1[u][v];
           dis2[v][u]=dis2[u][v];

     }


    }
  bitset<102>vis;
    M.push(mk(0,0));
    int Dis1[102],Dis2[102];
    for(int i=0;i<=n;i++) Dis1[i]=10003,Dis2[i]=0;
    Dis1[0]=0;
    while(!M.empty())
    {
      u=M.top().second;
      vis[u]=1;
      M.pop();
      for(int i=0;i<Edge[u].size();i++){
          if(Dis1[Edge[u][i]]>dis1[u][Edge[u][i]]&&!vis[Edge[u][i]])
          {
            Dis1[Edge[u][i]]=dis1[u][Edge[u][i]];
            M.push(mk(Dis1[Edge[u][i]],Edge[u][i]));


          }



}


    }
     bitset<102>vis1;
    N.push(mk(0,0));
     while(!N.empty())
    {
      u=N.top().second;
      vis1[u]=1;
      N.pop();
      for(int i=0;i<Edge[u].size();i++){
          if(Dis2[Edge[u][i]]<dis2[u][Edge[u][i]]&&!vis1[Edge[u][i]])
          {
            Dis2[Edge[u][i]]=dis2[u][Edge[u][i]];
            N.push(mk(Dis2[Edge[u][i]],Edge[u][i]));


          }



}


    }
    long long int ans=0;
    for(int i=0;i<=n;i++){ans+=(Dis2[i]+Dis1[i]);Edge[i].clear();}
    if(ans%2==0)
     printf("Case %d: %lld\n",t,ans/2);
     else printf("Case %d: %lld%c%d\n",t,ans,'/',2);





t++;

  }


}
