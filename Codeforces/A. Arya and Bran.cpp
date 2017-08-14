#include<bits/stdc++.h>

using namespace std;

int main()
{
  int days,branCoclet;
  scanf("%d %d",&days,&branCoclet);
  int total=0;
   int numOfCoc,Com=0;
  for(int i=1;i<=days;i++)
  {
   scanf("%d",&numOfCoc);
   total+=numOfCoc;
   for(int j=8;j>0;j--)
   {
     if(branCoclet>=j&&j<=total)

     {
        branCoclet-=j;
        total-=j;
        Com=i;

       break;

     }



   }


  }
  if(branCoclet)printf("-1\n");
  else  printf("%d\n",Com);




}
