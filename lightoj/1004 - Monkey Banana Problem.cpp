#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    long long int n;
    scanf("%lld",&n);
    long long int num[2*n+1][n+1];
    memset(num,0,sizeof(num));
    int k=1;
    for(int i=1;i<=2*n-1;i++)
    {  long long int nu;
      if(i<=n)
      {
        for(int j=1;j<=i;j++)
      {scanf("%lld",&nu);
        num[i][j]=max(num[i-1][j-1],num[i-1][j])+nu;

      }


    }
    else {
            for(int l=1;l<=n-k;l++)
            {
              scanf("%lld",&nu);
              num[i][l]=max(num[i-1][l],num[i-1][l+1])+nu;

            }
            ++k;


    }
//cout<<endl;

  }
  printf("Case %d: %lld\n",t,num[2*n-1][1]);
  t++;

  }
return 0;
}
