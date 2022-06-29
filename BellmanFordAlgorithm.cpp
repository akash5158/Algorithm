#include<bits/stdc++.h>
using namespace std;
struct n {
    int u;
    int v;
    int w; 
    n(int first, int second, int weight) {
        u = first;
        v = second;
        w = weight;
    }
};

int main(){
    int X=6,m=7;
    vector<n> edges; 
	edges.push_back(n(0,1,5));
	edges.push_back(n(1,2,-2));
	edges.push_back(n(1,5,-3));
	edges.push_back(n(2,4,3));
	edges.push_back(n(3,2,6));
	edges.push_back(n(3,4,-2));
	edges.push_back(n(5,3,1));
    int src=0;
    int i = 10000000; 
    vector<int> dist(X, i); 
    dist[src] = 0; 
    for(int i = 1;i<=X-1;i++) {
        for(auto it: edges) {
            if(dist[it.u] + it.w < dist[it.v]) {
                dist[it.v] = dist[it.u] + it.w; 
            }
        }
    }

    int fl = 0; 
    for(auto it: edges) {
        if(dist[it.u] + it.w<dist[it.v]) {
            cout << -1; 
            fl = 1; 
            break; 
        }
    }
    
    if(!fl) {
    	cout<<"Vertex \t Distace from Source"<<endl;
        for(int i = 0;i<X;i++) {
        	cout<<i<<" \t\t"<<dist[i]<<endl;
        }
    }
    return 0;
}
