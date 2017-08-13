#include<bits/stdc++.h>

using namespace std;
bool direc[101][101];

int main()
{

 int t=1,T;
 scanf("%d",&T);
 while(t<=T)
 { printf("\n\n");

 vector<int>vec[102];
   int n;
   int Cos[101][101];
   stack<int>St;
   memset(direc,false,sizeof(direc));

   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      int u,v,c;
      scanf("%d %d %d",&u,&v,&c);
      vec[u].push_back(v);
      vec[v].push_back(u);
      Cos[u][v]=c;
      Cos[v][u]=c;
      direc[u][v]=true;



   }
   St.push(1);
  bool vis[101];
  memset(vis,0,sizeof(vis));
  long long int one=0,two=0;

   while(!St.empty())
   {
     int top=St.top();
     St.pop();
     vis[top]=true;

     for(int i=0;i<vec[top].size();i++)
     {
        if(vis[vec[top][i]]==0)
        {
          St.push(vec[top][i]);
          if(direc[top][vec[top][i]]==true)
          one+=Cos[top][vec[top][i]];
          else two+=Cos[top][vec[top][i]];
        }

     }




   }


     if(direc[1][vec[1][0]]==true)
      one-=Cos[vec[1][0]][1],two+=Cos[vec[1][0]][1];
      else two-=Cos[vec[1][0]][1],one+=Cos[vec[1][0]][1];;
printf("Case %d: %lld",t,min(one,two));
t++;



 }

}
