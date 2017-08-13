#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    int n;
    scanf("%d",&n);
    int W[n+2],B[n+2];
    for(int i=1;i<=n;i++)
    scanf("%d",&W[i]);
      for(int i=1;i<=n;i++)
    scanf("%d",&B[i]);
    int ans;
    for(int i=1;i<=n;i++)
     {if(i==1) ans=(B[i]-W[i]-1);
       else ans^=(B[i]-W[i]-1);
      }

      if(ans)
       printf("Case %d: white wins\n",t);
       else printf("Case %d: black wins\n",t);
       t++;

  }



}
