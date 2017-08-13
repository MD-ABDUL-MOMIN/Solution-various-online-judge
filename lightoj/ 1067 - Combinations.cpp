#include<bits/stdc++.h>

using namespace std;
long long int Factorial[1000003];
#define mod 1000003
void fact()
{

 Factorial[0]=1;
  for(int i=1;i<=1000000;i++)
  Factorial[i]=(Factorial[i-1]*i)%mod;


}
long long int bigmod(long long int a,long long int b)
{
  if(b==0)return 1;

  long long int d=bigmod(a,b/2)%mod;
  d=(d*d)%mod;
  if(b%2)d=(d*a)%mod;

  return d;


}
int main()
{
 fact();
 for(int i=1;i<=1000;i++)
 cout<<Factorial[i]<<endl;
 int t=1,T;
 scanf("%d",&T);
 while(t<=T)
{  long long int n,r;
scanf("%lld %lld",&n,&r);
   long long int P=(Factorial[r]*Factorial[n-r])%mod;
  long long int ans=(Factorial[n]*bigmod(P,mod-2)%mod);
  //long long int ans=(Factorial[n]*bigmod(Factorial[r],mod-2)*bigmod(Factorial[n-r],mod-2))%mod;
//   cout<<bigmod(P,mod-2)<<endl;

   printf("Case %d: %lld\n",t,ans);

   t++;

 }

 return 0;
}
