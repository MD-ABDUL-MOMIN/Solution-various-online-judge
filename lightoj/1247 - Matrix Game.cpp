#include<bits/stdc++.h>

using namespace std;

int main()
{

  int t=1,T;
  scanf("%d",&T);

  while(t<=T)
  {
    int n,k;
    scanf("%d %d",&n,&k);
    long long int sum[n+4],ans,num;

    for(int i=1;i<=n;i++){
    sum[i]=0;
    for(int j=1;j<=k;j++)
    {
      scanf("%lld",&num);
      sum[i]+=num;


    }
    }
    for(int i=1;i<=n;i++)
    {
      if(i==1)ans=sum[i];
      else ans^=sum[i];


    }
  if(!ans)
  printf("Case %d: Bob\n",t);
  else printf("Case %d: Alice\n",t);
  t++;



  }



}
