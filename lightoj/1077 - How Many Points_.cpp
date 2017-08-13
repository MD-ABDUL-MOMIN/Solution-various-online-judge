#include<bits/stdc++.h>

using namespace std;
long long int gcd(long int a,long long int b)
{
  if(b==0)return a;
  return gcd(b,a%b);


}

int main()
{

  int t=1,T;
  scanf("%d",&T);
  long long int x1,x2,y1,y2,x,y,ans;
  while(t<=T)
  {
     scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
     x=x1-x2;
     y=y1-y2;
     if(x<0)x=x*-1;
     if(y<0)y=y*-1;
     ans=gcd(x,y);

        printf("Case %d: %lld\n",t,ans+1);
        t++;


  }
  return 0;

}
