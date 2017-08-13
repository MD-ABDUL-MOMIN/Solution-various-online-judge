 #include<bits/stdc++.h>

 using namespace std;

 int main()
 {
   int t=1,T;
   scanf("%d",&T);
   while(t<=T)
   {
    long long int Q,p=5,j=1,i=1,temp,te;
    scanf("%lld",&Q);
    bool si=0;
    while(j<=Q)
    {
      temp=p;
      te=j;

      p=p*5;
      ++i;
      j=(pow(5,i)-1)/4;
      if(Q>=temp&&Q<j)si=1;
    }
    if(si==1)
    printf("Case %d: impossible\n",t);
    else {
     long long int ans=temp+(Q-te)*5;
    printf("Case %d: %lld\n",t,ans);}

t++;
   }
return 0;

 }
