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
#define push_back pb
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
ll bigmod(ll a,ll b,ll c)
{
  if(b==0)return 1;
  ll x=bigmod(a,b/2,c);
  x=((x%c)*(x%c))%c;
  if(b%2) x=(a*x)%c;

  return x;

}
int main()
{
 int t=1,T,i;
 scio(T);
 while(t<=T)
 {
 ll n,k,mod,m,sum=0;
   sclth(n,k,mod);
   Forii(i,1,n)
   {sclo(m);sum+=m;
   }
   sum=sum%mod;
   ll ans=((bigmod(n,k-1,mod)*(k%mod))%mod*sum)%mod;

    ci(t);
    printf("%lld\n",ans);

    t++;


 }
 return 0;


}
