#include<bits/stdc++.h>

using namespace std;
long long int Triling5(long long int p)
{
  long long int sum=0,f=5;

  while(f<=p)
  {
    sum+=(p/f);
    f=f*5;
  }
  return sum;

}
long long int Triling2(long long int p)
{
  long long int sum=0,f=2;

  while(f<=p)
  {
    sum+=(p/f);
    f=f*2;
  }
  return sum;

}

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
     long long int n,r,p,q;
     scanf("%lld %lld %lld %lld",&n,&r,&p,&q);


       long long int up_five,up_two,down_2,down_5,m=0,nn=0;
       while(p%5==0)
       {
         p=p/5;
         ++m;
       }
       while(p%2==0)
       {
         ++nn;
         p=p/2;
       }



     up_five=Triling5(n)+m*q;
     up_two=Triling2(n)+nn*q;
     down_2=Triling2(r)+Triling2(n-r);
     down_5=Triling5(r)+Triling5(n-r);
     long long int ans=min(up_five-down_5,up_two-down_2);
     if(ans<0)ans=0;














      printf("Case %d: %lld\n",t,ans);

      t++;


  }
  return 0;

}
