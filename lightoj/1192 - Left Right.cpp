#include<bits/stdc++.h>

using namespace std;

int main()
{

  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
     int k;
     scanf("%d",&k);
     long long int ans,num,q;

     for(int i=1;i<=2*k;i++)
     {
     scanf("%lld",&num);

       if(i%2==0)
       {
          if(i==2) ans=(num-q-1);
          else ans^=(num-q-1);


       }
       else q=num;


     }
     if(!ans)
      printf("Case %d: Bob\n",t);
      else printf("Case %d: Alice\n",t);
      t++;




  }




}
