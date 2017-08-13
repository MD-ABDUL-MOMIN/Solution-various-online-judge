#include<bits/stdc++.h>

using namespace std;
int dp[104][104];
int palindrome(string str,int i,int j)
{
  if(i>=j)return 0;
  int ans;
   if(dp[i][j]!=-1) return dp[i][j];
  if(str[i]==str[j]) ans= palindrome(str,i+1,j-1);

  else {
  ans=1+min(palindrome(str,i,j-1),palindrome(str,i+1,j));




  }
dp[i][j]=ans;
  return dp[i][j];





}
int main()
{

int t=1,T;
scanf("%d",&T);

while(t<=T)
{


  string name;
  cin>>name;
 // int an=10000;
  memset(dp,-1,sizeof(dp));
  int an=palindrome(name,0,name.size()-1);
  //for(int i=0;i<name.size();i++)
  //{  int su=0;
   //for(int j=name.size()-1;j>=0;j--)
   //{
     //if(name[i]!=name[j]) su+=1;

   //}
   //an=min(an,su);



  //}

  printf("Case %d: %d\n",t,an);

  t++;



}




}
