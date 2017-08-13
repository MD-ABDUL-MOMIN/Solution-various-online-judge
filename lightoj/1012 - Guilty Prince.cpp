#include<bits/stdc++.h>

using namespace std;

int main()
{

   int t=1,T;
   scanf("%d",&T);
   while(t<=T)
   {
     int n,m;
     scanf("%d%d",&n,&m);
     map<pair<int,int>,bool>my;
     queue<pair<int,int> >q;
     char c[24][24];
     getchar();
     for(int i=1;i<=m;i++)
     {
       for(int j=1;j<=n;j++)
       {
            scanf("%c",&c[i][j]);

            if(c[i][j]=='@')
            {
                  q.push(make_pair(i,j));
            }
       }
       getchar();
     }
     my[q.front()]=0;
     long long int ans=0;
     pair<int,int>fro;
     int fx[]={1,0,-1,0};
     int fy[]={0,-1,0,1};
     while(!q.empty())
     {
        fro=q.front();
        if(my[fro]==0)++ans;

        q.pop();
        my[fro]=1;

        for(int i=0;i<4;i++)
        {
          int x=fx[i]+fro.first;
          int y=fy[i]+fro.second;
         // cout<<x<<' '<<y<<endl;

          if((x>0&&x<=m)&&(y>0&&y<=n)&&my[make_pair(x,y)]==0&&c[x][y]=='.')
          {
            q.push(make_pair(x,y));

          }

        }


     }

printf("Case %d: %lld\n",t,ans);
t++;
   }

}
