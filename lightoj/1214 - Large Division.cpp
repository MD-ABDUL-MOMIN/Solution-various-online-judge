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
int main()
{

int t=1,T;
scio(T);
while(t<=T)
{
  string num;
  ll div;
  int i=0;
  cin>>num>>div;
  if(num[0]=='-')i=1;
  if(div<0)div*=(-1);
  ll tem=0;
  while(i<num.size())
  {
     tem=(tem*10+num[i]-'0')%div;
i++;

  } ci(t);
  if(tem)

  printf("not divisible\n");
  else printf("divisible\n");
t++;
}
return 0;
}
