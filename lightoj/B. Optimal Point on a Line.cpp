#include<bits/stdc++.h>

using namespace std;
map<long long int,long long int>my;
int main()
{

long long int n;
 vector<long long int>vec;
  scanf("%lld",&n);
  for(int i=1;i<=n;i++)
  {  long long int l;
    scanf("%lld",&l);
       vec.push_back(l);
       my[l]=i;

  }
  sort(vec.begin(),vec.end());
  long long int c=vec[n-1];
  long long int ans,d;
for(int i=0;i<n;i++)
{
   long long int mi=vec[i]-vec[0];
   if(mi<0)mi *=-1;

   long long int ma=vec[n-1]-vec[i];
   if(ma<0)ma*=-1;
   if(mi<=ma) d=ma-mi;
  if(mi<=ma&&c>=d)

  {
    ans=i;
    c=d;

  }
}
cout<<my[vec[ans]]<<endl;

}
