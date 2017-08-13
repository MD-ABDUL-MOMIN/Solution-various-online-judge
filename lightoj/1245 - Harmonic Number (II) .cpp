#include<bits/stdc++.h>

using namespace std;
long long int h[10003];
void H()
{
  for(long long int i=1;i<=100000000;i++)
   { long long int dd=i/10000;

   h[dd]+=(1/i);
   //cout<<1/i<<endl;
   //cout<<h[i/10000]<<endl;

  }


}
int main()
{

 long long int t=1,T; H();
 scanf("%lld",&T);

 while(t<=T)
 { double ans=0;
   long long int n;
   scanf("%lld",&n);
   long long int cc=n/10000;
   for(long long int l=0;l<cc;l++)
   ans+=h[l];

   long long int dd;
   if(cc==0)dd=1;
   else dd=cc*10000;
   for(;dd<=n;dd++)
   ans+=(1.00/(dd*1.00));

printf("Case %d: %.10f\n",t,ans);
 t++;



 }

}
