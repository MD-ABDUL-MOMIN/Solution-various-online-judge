#include<bits/stdc++.h>

using namespace std;
long long int dp[19][1<<17];
int a[19][19];
int n;

 long long int check(int i,long long int vis)
{
long long int sum=-1;
  if(i==n)return 0;


  if(dp[i][vis]!=-1) return dp[i][vis];
  else {

  for(int j=0;j<n;j++)
  {
     if((vis&(1<<j))==0)
     {
            cout<<vis<<endl;
         sum=max(sum,a[i][j]+check(i+1,vis|(1<<j)));


     }



  }
  dp[i][vis]=sum;

  return sum;



  }






}

int main()
{
  //int n;
  scanf("%d",&n);

  long long int sum,vis=0;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);


  }
  memset(dp,-1,sizeof(dp));
  sum=check(0,vis);
  //cout<<check(0,0)<<endl;
cout<<sum<<endl;




}
