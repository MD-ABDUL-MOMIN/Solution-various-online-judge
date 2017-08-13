#include<bits/stdc++.h>

using namespace std;
map<long long int,int>mm;
void pir()
{
  for(long long int i=2;i<=65536;i++)
  {
        long long int k=1,kk=1;
        if(mm[i]==0)
        for(int j=1;j<=32&&k<=4294967296;j++)
        {
          k*=i;
          mm[k]=j;
          //if(j%2)mm[k]=j;

          int   lll=mm[k];
          while(lll%2==0)lll/=2;

          mm[-k]=lll;

        }

  }

}
int main()
{
  int t=1,T;
  pir();
  scanf("%d",&T);
  long long int n;
  while(t<=T)
  {
    scanf("%lld",&n);
      if(mm[n]==0)mm[n]=1;
    printf("Case %d: %lld\n",t,mm[n]);
    //cout<<mm[n]<<endl;

    t++;

  }
  return 0;
}
