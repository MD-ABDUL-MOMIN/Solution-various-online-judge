#include<bits/stdc++.h>

using namespace std;
vector<long long int>prime;
bitset<46350>visit;
void sieve()
{
 // prime.push_back(2);
  for(long  i=3;i<=46345;i+=2)
  {
   if(visit[i]==0)
   {
    prime.push_back(i);
    for(long  j=i*i;j<=46345;j+=(2*i))
    visit[j]=1;

   }

  }


}
   //bitset<100000000>v;
int main()
{  int t=1,T;
 scanf("%d",&T);
 sieve();
 while(t<=T)
 {  long long int ans=0;
   long long int a,b;
   scanf("%lld %lld",&a,&b);
   long long int A=a;
   bitset<2000000>v;
   //map<long long int,bool>v;

 for(int i=0;prime[i]*prime[i]<=b&&i<prime.size();i++)
 {

    long long int jj=(A/prime[i])*prime[i];

    if(jj<a)jj+=prime[i];
  if(jj==prime[i])jj+=prime[i];
    while(jj<=b)
    {

       v[jj-a]=1;
    jj+=prime[i];
    }

 }
 for(long long int i=a;i<=b;i++)
 if(v[i-a]==0&&(i%2!=0||i==2)&&i>1)++ans;
 printf("Case %d: %lld\n",t,ans);
t++;
}

}
