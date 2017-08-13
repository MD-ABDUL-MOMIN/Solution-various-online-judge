#include<bits/stdc++.h>

using namespace std;
struct Edge { int x, y, w; } ;


int dmst(int N, vector<Edge> E,int root) {
  const int oo = 1e9;

  vector<int> cost(N), back(N), label(N), bio(N);
  int ret = 0;

  for (;;) {
   for(int i=0;i<N;i++) cost[i] = oo;

      for(int i=0;i<E.size();i++) {
      if (E[i].x == E[i].y) continue;
      if (E[i].w < cost[E[i].y]) cost[E[i].y] = E[i].w, back[E[i].y] = E[i].x;
    }
    cost[root] = 0;
   for(int i=0;i<N;i++) if (cost[i] == oo) return -1;
   for(int i=0;i<N;i++){ ret += cost[i];cout<<" "<<cost[i]<<' ' <<i<<' ';}
   cout<<ret<<"ekdekekr"<<endl;

    int K = 0;
   for(int i=0;i<N;i++) label[i] = -1;
   for(int i=0;i<N;i++) bio[i] = -1;

   for(int i=0;i<N;i++) {
      int x = i;
      for (; x != root && bio[x] == -1; x = back[x]) {bio[x] = i;cout<<"first "<<x<<' '<<i<<endl;}

      if (x != root && bio[x] == i) {
        for (; label[x] == -1; x = back[x]) {label[x] = K;cout<<"Second "<<x<<' '<<K<<endl;}
        ++K;
      }
    }
    if (K == 0) break;


   for(int i=0;i<N;i++){ if(label[i] == -1) label[i] = K++;
       cout<<i<<' '<<label[i]<<'\t';}
    for (int i=0;i<E.size();i++) {
      int xx = label[E[i].x];
      int yy = label[E[i].y];
      cout<<E[i].x<<' '<<E[i].y<<' '<<E[i].w<<endl;
      if (xx != yy) { E[i].w -= cost[E[i].y];}
      E[i].x = xx;
      E[i].y = yy;
           cout<<"CHange "<<E[i].x<<' '<<E[i].y<<' '<<E[i].w<<endl;


    }

    root = label[root];
    N = K;
  }

  return ret;
}
int main()
{
  Edge m;
vector<Edge>F;
  for(int i=0;i<10;i++)
   {
    int U,V,W;
    scanf("%d%d%d",&U,&V,&W);
    m.w=W;
    m.x=U;
    m.y=V;
    F.push_back(m);




   }
  int a= dmst(5,F,3);
cout<<a<<endl;




}
