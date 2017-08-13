#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    unsigned long long int ab,a,b;
    scanf("%llu",&ab);
     a=(ab*10)/9;
    if(ab%9==0)
    {

      printf("Case %d: %llu %llu\n",t,a-1,a);

    }
    else {

     printf("Case %d: %llu\n",t,a);
    }
    t++;

  }
  return 0;

}
