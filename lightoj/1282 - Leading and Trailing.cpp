#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define M 1000
long long int bigmod(ll a,ll b)
{
  if(b==0)return 1;

  ll x=bigmod(a,b/2)%M;

  x=(x*x)%M;

  if(b%2)
  x=(x*a)%M;

  return x;


}

int main()
{

int t=1,T;
scanf("%d",&T);
while(t<=T)
{

long long int a,b;
scanf("%lld %lld",&a,&b);
double aa=b*log10(a*1.00);
aa=aa-(long)aa;
aa=pow(10.00,aa);
long long int aaa=aa*100;
if(aaa>=1000)aaa=aaa/10;
printf("Case %d: %03lld %03lld\n",t,aaa,bigmod(a,b));

t++;


}




}
