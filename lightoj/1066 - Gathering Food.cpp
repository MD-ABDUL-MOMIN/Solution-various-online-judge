#include<bits/stdc++.h>

using namespace std;




int main()
{
   int t=1,T;
   scanf("%d",&T);
   while(t<=T)
   {
     int n;
     vector< pair< pair<int,int> , char > >vec;
     vector< pair<char, pair<int,int> > >stal;
     int fx[]={0,0,1,-1};
     int fy[]={1,-1,0,0};

     scanf("%d",&n);
     char st[n+2][n+2];
      bool visit[n+2][n+2];
     //getchar();

     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){getchar();
      scanf("%c",&st[i][j]);
      if(st[i][j]!='.'&&st[i][j]!='#')
       stal.push_back(make_pair(st[i][j],make_pair(i,j)));
       vec.push_back(make_pair(make_pair(i,j),st[i][j]));



      }

      }
      sort(stal.begin(),stal.end());
       map <pair <int,int>,int>dis;
       pair<int,int>to;
       int ans=0;
       bool mm;
      for(int i=0;i<stal.size()-1;i++)
      {

          queue< pair<int,int> >qu;

         // memset(dis,0,sizeof(dis));
         for(int k=0;k<n;k++)
         {
           for(int l=0;l<n;l++){
           visit[k][l]=false;
           dis[make_pair(k,l)]=0;}

         }

          qu.push(make_pair(stal[i].second.first,stal[i].second.second));
          int d=0;

         while(!qu.empty())
         {
             to=qu.front();
              //    cout<<to.first<<' '<<to.second<<endl;
            visit[to.first][to.second]=true;
            int fff=dis[to];
            qu.pop();
         for(int m=0;m<4;m++)
         { int Fx=to.first+fx[m];
          int Fy=to.second+fy[m];
           if(Fx>=0&&Fx<n&&Fy>=0&&Fy<n&&st[Fx][Fy]!='#')
           {
             if(st[Fx][Fy]=='.'&&visit[Fx][Fy]==0)
              {
               dis[make_pair(Fx,Fy)]=(fff+1);
              qu.push(make_pair(Fx,Fy));
              }
              else if(st[Fx][Fy]==stal[i+1].first)
              {
                d=fff+1;
                //cout<<d<<endl;
              break;

              }


           }


          }

         }





 mm=false;
if(d==0){mm= true;break;}
else
 ans+=d;
}
if(mm==true)
printf("Case %d: Impossible\n",t);
else printf("Case %d: %d\n",t,ans);
//cout<<ans<<endl;





t++;

   }


}
