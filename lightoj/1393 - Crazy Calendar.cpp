#include<bits/stdc++.h>

using namespace std;

int main()
{

int t=1,T;
scanf("%d",&T);
while(t<=T)
{

  long long int r,c,p;
  scanf("%lld %lld",&r,&c);
  int num[r+4][c+4];
  for(int i=1;i<=r;i++)
  for(int j=1;j<=c;j++)
  {
     scanf("%lld",&p);
      num[i][j]=p%2;


  }
  long long int ans=0;
  for(int i=0;i<c;i++)
  {   p=i;
    for(int j=r;j>=1;j--)
      {
         ans^=(num[j][c-i]*p);
     ++p;

      }




  }
  if(ans) printf("Case %d: lose\n",t);
  else printf("Case %d: win\n",t);

  t++;






}







}
