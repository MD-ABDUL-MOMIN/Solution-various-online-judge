#include<bits/stdc++.h>

using namespace std;

vector<long long int>prime;
bitset<10000004>visit;
long long int F[10000003];
typedef long long int ll;

void sieve()
{
  prime.push_back(2);

  for(ll i=3;i<=10000000;i+=2)
  {
    if(!visit[i])
    {
      prime.push_back(i);
      for(ll j=i*i;j<=10000000;j+=i)
      visit[j]=1;




    }


  }
for(int i=0;i<prime.size();i++)
{
  for(int j=0;j<prime.size();j++)
  {
     ++F[prime[i]+prime[j]];

  }


}

}

int main()
{
  int t=1,T;
  scanf("%d",&T);
  sieve();
  while(t<=T
  {
 ll n;
 scanf("%lld",&n);
 printf("Case %d: %lld\n",t,F[n]);


 t++;


  }

  return 0;


}
