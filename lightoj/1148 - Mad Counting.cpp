#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
    int n;
    scanf("%d",&n);
    long long int d,l=0,r=0;
    for(int i=0;i<n;i++)
    {
       scanf("%lld",&d);
       if(i==0)
       {



       }

       else {
            if(d<=l)
             r+=1;
             else if(d<=r)
             {
                l+=1;

             }
             else {

               if(r>l)
               {
                 r+=(d-r);
                 l+=1;


               }
               else {l+=(d-l);r+=1;}
             }


       }
       cout<<l<<' '<<r<<endl;

    }
    printf("Case %d: %lld\n",t,l+r);

    t++;


  }
  return 0;

}
