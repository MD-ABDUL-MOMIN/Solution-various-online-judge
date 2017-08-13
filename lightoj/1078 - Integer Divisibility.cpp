#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    long long int n;
    int k;
    scanf("%lld %d",&n,&k);
    long long int tem=0,ans=0;
    bool sig=0;
    while(tem!=0||sig==0)
    {
      sig=1;
      tem=(tem*10+k)%n;
      ++ans;
    //  cout<<tem<<endl;


    }
    printf("Case %d: %lld\n",t,ans);

    t++;



  }
  return 0;


}
