#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector<long long int>prime;
bitset<1000000>visit;
#define Mod 1000000007
void sieve()
{
  prime.push_back(2);
  for(ll i=3;i<=4000;i+=2)
  {
    if(!visit[i])
    { prime.push_back(i);

      for(ll j=i*i;j<=4000;j+=(2*i))
      visit[j]=1;

    }
  }
}
ll bigmod(int a,int b)
{
  if(b==0)return 1;
  ll x=bigmod(a,b/2)%Mod;
  x=(x*x)%Mod;

  if(b%2)
  x=(x*a)%Mod;


  return x;

}

int main()
{
  sieve();
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    int p,k;
    scanf("%d %d",&k,&p);
    ll ans=0,Te=1;

    for(int i=0;i<p;i++)
    {
      Te=(Te*(prime[i]-1))%Mod;
      ll ff=bigmod(prime[i],k-p);
      if((k-p)==0)ff=0;

      ans=(ans+ff)%Mod;


    }

   if(ans!=0)
    ans=(ans*Te)%Mod;
    else ans=Te;

    printf("Case %d: %lld\n",t,ans);

    t++;

  }
  return 0;



}
