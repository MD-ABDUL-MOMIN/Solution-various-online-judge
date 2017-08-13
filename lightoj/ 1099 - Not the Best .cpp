#include<bits/stdc++.h>
//#include<limits>
using namespace std;
#define mk make_pair
typedef long long int ll;
int main()
{

   int t=1,T;
   scanf("%d",&T);
   while(t<=T)
   {
       int n,edge;
       scanf("%d%d",&n,&edge);
       map< pair<int,int>,int>INFEdge;
       vector<int>Ed[n+3];
         for(int i=1;i<=edge;i++)
         {
          int u,v,w;
          scanf("%d %d %d",&u,&v,&w);
            Ed[u].push_back(v);
            Ed[v].push_back(u);
            if(INFEdge[mk(u,v)]!=NULL){ w=min(w,INFEdge[mk(u,v)]);}
            INFEdge[make_pair(u,v)]=w;
            INFEdge[make_pair(v,u)]=w;



         }

        priority_queue < pair< pair<ll,ll> ,int> ,vector<pair< pair<ll,ll>,int> > ,greater< pair<pair<ll,ll>,int> > >Q;
      ll sdist[n+3];
      ll ldist[n+3];
      for(int i=1;i<=n;i++) sdist[i]=100006,ldist[i]=100006;
     ll first=0,second=100006;
      for(int i=0;i<Ed[1].size();i++)
       ldist[1]=min(ldist[1],(ll)2*INFEdge[make_pair(1,Ed[1][i])]);
       Q.push(mk(mk(second,0),1));
       //ldist[1]=second;
       sdist[1]=0;
      // memset(vis,0,sizeof(vis));
        // cout<<"Fkdls"<<endl;
        bitset<5006>vis;
       while(!Q.empty())
       {

         int u=Q.top().second;

        vis[u]=1;
         Q.pop();

         for(int i=0;i<Ed[u].size();i++)
         {
           if(ldist[Ed[u][i]]>min(sdist[u]+3*INFEdge[mk(u,Ed[u][i])],ldist[u]+INFEdge[mk(u,Ed[u][i])])||sdist[Ed[u][i]]>sdist[u]+INFEdge[mk(u,Ed[u][i])]|!vis[Ed[u][i]])
           {

            ldist[Ed[u][i]]=min(ldist[Ed[u][i]],min(sdist[u]+3*INFEdge[mk(u,Ed[u][i])],ldist[u]+INFEdge[mk(u,Ed[u][i])]));
            if(sdist[Ed[u][i]]>sdist[u]+INFEdge[mk(u,Ed[u][i])])
             {   ldist[Ed[u][i]]=min(ldist[Ed[u][i]],sdist[Ed[u][i]]);
               sdist[Ed[u][i]]=sdist[u]+INFEdge[mk(u,Ed[u][i])];



             }
             else {

                   ldist[Ed[u][i]]=min(ldist[Ed[u][i]],sdist[u]+INFEdge[mk(u,Ed[u][i])]);
      //    cout<<"second"<<' '<<Ed[u][i]<<endl;


             }

             if(Ed[u][i]!=n)
             Q.push(mk(mk(ldist[Ed[u][i]],sdist[Ed[u][i]]),Ed[u][i]));

           }






        }










       }
       printf("Case %d: %lld\n",t,ldist[n]);



t++;



   }

   }
