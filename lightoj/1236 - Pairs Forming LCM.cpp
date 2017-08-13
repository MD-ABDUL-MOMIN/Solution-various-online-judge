#include<bits/stdc++.h>

using namespace std;
vector<long long int >prime;
typedef long long int ll;
bitset<100000004>visit;
void sieve()
{
  prime.push_back(2);

  for(ll i=3;i<=10000000;i+=2)
  {
    if(!visit[i])
    {
     prime.push_back(i);
     for(ll j=i*i;j<=10000000;j+=(2*i))
     visit[j]=1;


    }


  }


}
int main()
{
   int t=1,T;
   scanf("%d",&T);
   sieve();
   while(t<=T)
   {
     ll N,ans=1;
     scanf("%lld",&N);

     for(int i=0;prime[i]*prime[i]<=N&&i<prime.size();i++)
     {  int tt=0;
       while(N%prime[i]==0)
       {

       ++tt;
       N=N/prime[i];

       }
     if(tt!=0)
     {
      ans=ans*(2*tt+1);

     }

     }
     if(N!=1)
     {
       ans=ans*(2+1);

     }
     ans/=2;
     printf("Case %d: %lld\n",t,ans+1);
     t++;


   }

}
