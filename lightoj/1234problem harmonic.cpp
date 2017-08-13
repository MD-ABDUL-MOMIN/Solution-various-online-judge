#include<bits/stdc++.h>

using namespace std;
double f[100002];
void sum()
{
double ans=0;
 for(long long int i=1;i<=100000000;i++)
 {
    if(i%1000==0)
   f[i/1000]+=(1*1.00/(i*1.00))+f[i/1000-1];
   else {
    f[i/1000]+=(1*1.00/(i*1.00));

   }

 }

}
int main()
{
  sum();
  float ans;
  long long int an;
     cin>>an;
     ans=f[an/1000];
     cout<<f[an/1000]<<' '<<ans<<endl;
     for(long long int i=(an/1000)*1000+1;i<=an;i++)
     ans+=(1.00/(i*1.00));
     cout<<(an/1000)*1000<<endl;
       printf("%lld %.f\n",an,ans);

return main();
}
