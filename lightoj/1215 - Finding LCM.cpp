///                 "Bismillahir Rahmanir Rahim"
/// ,--,     ,--,   ,---,  ,--,    ,--, ,--, _       _
/// |    \  /   |  /     \ |   \  /   |  |    |     / |
/// |     \/    |  |     | |    \/    |  |    |    /  |
/// |           |  |     | |          |  |    |   /   |
/// |           |  \_____/ |          |  |    |  /    |
///'''         '''        '''        ''''''   '_/     |_
///Md abdul momin,deptOfIce,IslamicUnversity,Bangladesh


#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
//#define push_back pb
#define mp make_pair
#define Forii(i,l,n) for(int i=l;i<=n;i++)
#define Foril(i,l,n) for(long long int i=l;i<=n;i++)
#define Fordi(i,n,l) for(int i=n;i>=l;i--)
#define Fordl(i,n,l) for(long int i=n;i>=l;i--)
#define scio(a) scanf("%d",&a)
#define scit(a,b) scanf("%d %d",&a,&b)
#define scith(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sclo(n) scanf("%lld",&n)
#define sclt(a,b) scanf("%lld %lld",&a,&b)
#define sclth(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define scdo(a) scanf("%llf",&a)
#define scdt(a,b) scanf("%llf %llf",&a,&b)
#define scdth(a,b,c) scanf("%llf %llf %llf",&a,&b,&c)

#define prio(n) printf("%d",n)
#define nn printf("\n");
#define prit(a,b) printf("%d %d",a,b)
#define prith(a,b,c) printf("%d %d %d",a,b,c)
#define ci(n) printf("Case %d: ",n)
#define cl(n) printf("Case %lld: ",n)
#define prdo(n) printf("%llf",n)
#define prdt(a,b) printf("%llf %llf",a,b)
#define prdth(a,b,c) printf("%llf %llf %llf",a,b,c)
#define prlo(n) printf("%lld",n)
#define prlt(a,b) printf("%lld %lld",a,b)
#define prlth(a,b,c) printf("%lld %lld %lld",a,b,c)

vector<long long int>prime;
bitset<1000002>visit;
void sieve()
{
  prime.push_back(2);
  for(ll i=3;i<=1000000;i+=2)
  {
    if(!visit[i])
    {
      prime.push_back(i);
      for(ll j=i*i;j<=1000000;j+=(2*i))
      visit[j]=1;


    }


   }

}
long long int gcd(ll a,ll b)
{
  if(b==0)return a;
  return gcd(b,a%b);

}
long long int LCm(ll a,ll b)
{

  return a*b/gcd(a,b);


}
  int A[1000002],B[1000002];
void prime_factor(long long int a,bool ff)
{
// int A[1000003];
 // memset(A,0,sizeof(A));
 if(ff==true)
 {
  for(int i=0;prime[i]*prime[i]<=a;i++)
   {
     int t=0;
        while(a%prime[i]==0)
        {
          ++t;
          a/=prime[i];

        }
        if(t!=0)
        {
           A[prime[i]]=t;

        }


   }

   if(a!=1)A[a]=1;




 }
 else {
  for(int i=0;prime[i]*prime[i]<=a;i++)
   {
     int t=0;
        while(a%prime[i]==0)
        {
          ++t;
          a/=prime[i];

        }
        if(t!=0)
        {
           B[prime[i]]=t;

        }


   }

   if(a!=1)B[a]=1;





 }


//return A[1000003];


}


int main()
{

   int t=1,T;
   scanf("%d",&T);
   sieve();
   while(t<=T)
   {

   long long int a,b,L,Ta,Tb,TL;
   sclth(a,b,L);
   TL=L;
   Ta=a;
   Tb=b;





memset(A,0,sizeof(A));
memset(B,0,sizeof(B));
prime_factor(a,true);
prime_factor(b,false);
long long int ans=1;
for(int i=0;prime[i]*prime[i]<=L;i++)
{
  int tt=0;
  while(L%prime[i]==0)
 {
    ++tt;
    L/=prime[i];

  }
  if(tt!=0)
    {
      int ff=tt-max(A[prime[i]],B[prime[i]]);
      if(ff!=0)
      for(int k=1;k<=tt;k++)
      {
       ans=ans*prime[i];

      }
//cout<<ff<<' '<<prime[i]<<endl;

    }


}
if(L!=1)
{

int fff=1-max(A[L],B[L]);
if(fff==1)ans*=L;

}
if(TL%LCm(Ta,Tb)!=0)
{
  printf("Case %d: impossible\n",t);


}
else printf("Case %d: %lld\n",t,ans);

t++;

}



   return 0;





}


