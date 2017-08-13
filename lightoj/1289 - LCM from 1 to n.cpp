#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector<ll>prime;
bitset<100000005>visit;
#define Mod 4294967296
void sieve()
{
  prime.push_back(2);

  for(ll i=3;i<=99999989;i+=2)
  {
    if(!visit[i])
    {
      prime.push_back(i);
      for(ll j=i*i;j<=99999989;j+=(2*i))
      visit[j]=1;



    }



  }



}
int main()
{
  int t=1,T;

  sieve();
  scanf("%d",&T);

  cout<<prime[prime.size()-1]<<endl;
  while(t<=T)
  {
    ll n,k,ans=1;
    scanf("%lld",&n);
    for(int i=0;i<prime.size()&&prime[i]<=n;i++)
    {
      long long int f=prime[i];
      bool si=0;

      while(f*prime[i]<=n)
      {
        f=(f*prime[i])%Mod;
        si=1;


      }

      ans=((ans%Mod)*f)%Mod;




    }
    printf("Case %d: %lld\n",t,ans);

    t++;




  }
  return 0;


}
