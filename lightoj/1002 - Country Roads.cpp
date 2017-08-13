#include<bits/stdc++.h>

using namespace std;

#define MAXN 502
#include<limits.h>
#define INT_MAX 100000

int dist[MAXN];

int main()
{
  int t=1,T;
  scanf("%d",&T);
  while(t<=T)
  {
  vector<int>vec[501];
    int n,m,u,v,w;
    int cost[501][501];
    memset(cost,0,sizeof(cost));

    scanf("%d %d",&n,&m);

    while(m--)
    {
      scanf("%d %d %d",&u,&v,&w);

      if(cost[u][v]!=0)
      {
         w=min(w,cost[u][v]);
      }
      else {

           vec[u].push_back(v);
      vec[v].push_back(u);



      }

      cost[u][v]=w;
      cost[v][u]=w;

    }
    int tt;
    scanf("%d",&tt);//printf("FKJDKFJDK");

	for (int i=0; i<n; i++){
		dist[i] = 100000;
	}
	//printf("\nFKJDKFJDK");
	dist[tt] = 0;
	multimap<int,int> pq;
	multimap<int,int>::iterator it;
	pq.insert(multimap<int,int>::value_type(0,tt));
 //cout<<"00000"<<endl;

	while(!pq.empty()){
		it = pq.begin();
		int u = (*it).second;
		int cost_to_u = (*it).first;
		pq.erase(it);
		if (cost_to_u<=dist[u]){
		int out_degree = vec[u].size();
		for (int i=0; i<out_degree; i++){
			int v =vec[u][i];
			int new_cost = max(cost_to_u,cost[u][v]);
			if (new_cost<dist[v]){
				dist[v] = new_cost;
				pq.insert(multimap<int,int>::value_type(dist[v],v));
			}
		}
		}
		//cout<<"FDKFJKDF"<<endl;
}
printf("Case %d:\n",t);
for(int i=0;i<n;i++)
if(dist[i]==100000)
cout<<"Impossible"<<endl;
else
cout<<dist[i]<<endl;
t++;
}
return 0;
}
