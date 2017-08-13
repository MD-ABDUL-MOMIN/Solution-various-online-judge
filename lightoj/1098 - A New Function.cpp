#include<bits/stdc++.h>

using namespace std;
int main()
{
   int t=1,T;
   scanf("%d",&T);
   while(t<=T)
   {
     long long int n;
     long double ans=0;
     scanf("%lld",&n);
     for(int i=2;i<=sqrt(n);i++)
     {
       long long int j=n/i;
       ans+=((j+i)*(j-i+1))/2;
       ans+=i*(j-i);

     }
     //cout<<"Case "<<t<<": "<<ans<<endl;
     printf("Case %d: %.0llf\n",t,ans);

     t++;

   }
}
