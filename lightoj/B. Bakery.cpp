#include<bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,m,k;
  vector <pair<pair <long long int,long long int>,long long int > >my;
  scanf("%lld%lld%lld",&n,&m,&k);
  for(int i=0;i<m;i++)
  {
  long long int u,v,l;
     scanf("%lld%lld%lld",&u,&v,&l);
     my.push_back(make_pair(make_pair(u,v),l));
  }
  bitset<100003>storeage;

  long long int ans=10000000000,p;
  for(int i=0;i<k;i++)
  { scanf("%lld",&p);
  storeage[p]=1;
  }
  for(int i=0;i<my.size();i++)
  {
      if((storeage[my[i].first.first]==1&&storeage[my[i].first.second]!=1)||(storeage[my[i].first.second]==1&&storeage[my[i].first.first]!=1))
      if(ans>my[i].second)
       ans=my[i].second;
  }

  if(ans==10000000000)
  ans=-1;
  cout<<ans<<endl;
}
