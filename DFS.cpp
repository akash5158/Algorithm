#include<bits/stdc++.h>
using namespace std;
const int S=1e3+10;
vector<int> g[S];
bool visit[S];
void DFS(int src)
{
	cout<<src<<" ";
	visit[src]=true;
	for(auto nbr:g[src])
	{
		if(visit[nbr])
		continue;
		DFS(nbr);
	}
}
int main()
{
	int x,y;
	cout<<"Enter number of vertices and edges"<<endl;
	cin>>x>>y;
	for(int i=0;i<y;i++)
	{
	  int v1,v2;
	  cout<<"Enter edge\n";
	  cin>>v1>>v2;
	  g[v1].push_back(v2);
	  g[v2].push_back(v1);
	}
	DFS(1);
  
}
