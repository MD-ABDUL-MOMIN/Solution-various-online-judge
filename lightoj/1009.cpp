#include<bits/stdc++.h>

using namespace std;



int main()
{
 int t=1,T;
 scanf("%d",&T);
 while(t<=T)
 {
   long long int n,ans=0;
   vector<int>co;
   vector<int>Edge[20005];
   int u,v;
   scanf("%lld",&n);
   bitset<20010>visited;
   for(int i=1;i<=n;i++)
   {
     scanf("%d%d",&u,&v);
     Edge[u].push_back(v);
     Edge[v].push_back(u);
     if(visited[u]==0)
       co.push_back(u);
       if(visited[v]==0)
       co.push_back(v);
       visited[u]=1;
       visited[v]=1;
   }
  bool visit[20007];
  memset(visit,false,sizeof(visit));
  for(int i=0;i<co.size();i++)
  {
   int D[20003];  int va=0,ly=0;
   if(visit[co[i]]==0)
   {   D[co[i]]=0;


      queue<int>my;
      my.push(co[i]);
      while(!my.empty())
      {
         int fro=my.front();
         if(visit[fro]==0)
         {
         if(D[fro]%2==0)++va;
           else ++ly;
         }

          visit[fro]=1;
         my.pop();
         for(int j=0;j<Edge[fro].size();j++)
         {
            if(visit[Edge[fro][j]]==0)
            {
              D[Edge[fro][j]]=D[fro]+1;

              my.push(Edge[fro][j]);

            }

         }

      }







   }
   ans+=max(ly,va);


  }
  printf("Case %d: %lld\n",t,ans);
  t++;

 }
 return 0;

}


