#include<bits/stdc++.h>

using namespace std;
vector<int>Ed[1002];
#define mk make_pair
priority_queue< pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >Q;
int main()
{
  int t=1,T;
  scanf("%d",&T);
  int u,v,w,n,m,k;
  int Edin[1001][1001];
  while(t<=T)
  {
     scanf("%d %d %d",&n,&m,&k);
     memset(Edin,0,sizeof(Edin));
     for(int i=1;i<=m;i++)
     {
       scanf("%d%d%d",&u,&v,&w);
       Edin[u][v]=w;
       Ed[u].push_back(v);



     }int Dis[1002];
     for(int i=0;i<n;i++) Dis[i]=10002;
     Dis[k]=0;
     Q.push(mk(0,k));
     bitset<1002>vis;


     while(!Q.empty())
     {
       u=Q.top().second;
        vis[u]=true;
        Q.pop();
        for(int i=0;i<Ed[u].size();i++)
        {
          if(Dis[Ed[u][i]]>Edin[u][Ed[u][i]])
            {
              Dis[Ed[u][i]]=Edin[u][Ed[u][i]];
              Q.push(mk(Dis[Ed[u][i]],Ed[u][i]));


            }



        }



     }
     bool sig=true;
     long long int ans=0;
     for(int i=0;i<n;i++){
     if(Dis[i]==10002)sig=false;
     ans+=Dis[i];
  Ed[i].clear();
     }
     if(sig)
     {
       printf("Case %d: %lld\n",t,ans);

     }
     else printf("Case %d: impossible\n",t);

t++;

  }


return 0;


}
