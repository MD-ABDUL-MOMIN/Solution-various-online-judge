#include<bits/stdc++.h>

using namespace std;
#define mk(a,b) make_pair(a,b)
int main()
{

int t=1,T;
scanf("%d",&T);
while(t<=T)
{
   int n,m;
   char c[23][23],dis[23][23];
   map<pair<int,pair<int,int> >,int>my;
   vector<pair<int,int> >vec;
   scanf("%d%d",&n,&m);
   memset(dis,0,sizeof(dis));
   getchar();
  for(int i=1;i<=n;i++)
  {
     for(int j=1;j<=m;j++)
     {
        scanf("%c",&c[i][j]);

    if(c[i][j]>='1'&&c[i][j]<='9')
     {  vec.push_back(make_pair(i,j));
        dis[i][j]=c[i][j]-'0';
    }

  }

 getchar();
}


for(int i=0;i<vec.size();i++)
{
  my[mk(i,vec[i])]=0;

  queue<pair<int,int> >Q;
  pair<int,int>fro;
  bool visit[23][23];
  memset(visit,0,sizeof(visit));
  Q.push(vec[i]);
  int fx[]={1,1,2,2,-1,-1,-2,-2};
  int fy[]={2,-2,1,-1,2,-2,1,-1};
  visit[vec[i].first][vec[i].second]=true;
  while(!Q.empty())
  {
    fro=Q.front();



    Q.pop();

    for(int j=0;j<8;j++)
    {
      int x=fx[j]+fro.first;
      int y=fy[j]+fro.second;
      if((x>=1&&x<=n)&&(y>=1&&y<=m)&&visit[x][y]==false)
      {
       my[mk(i,mk(x,y))]=my[mk(i,fro)]+1;
        Q.push(make_pair(x,y));
   visit[x][y]=true;
      }



    }




  }



}
long long int ans=1000000;
for(int i=1;i<=n;i++)
{
  for(int j=1;j<=m;j++)
  {
  long long int  c=0;

    for(int k=0;k<vec.size();k++)
    {

      if(my[mk(k,mk(i,j))]>0||(vec[k].first==i&&vec[k].second==j))
      {

         c+=(my[mk(k,mk(i,j))]/dis[vec[k].first][vec[k].second]);

         if(my[mk(k,mk(i,j))]%dis[vec[k].first][vec[k].second]!=0)
         c+=1;

      }
      else {
       c=1000000;break;
      }

    }
    //if(c==10000)ans
//if(sig!=0)
  ans=min(ans,c);
  }

}
if(ans==1000000)ans=-1;

printf("Case %d: %lld\n",t,ans);
t++;

}

return 0;
}


