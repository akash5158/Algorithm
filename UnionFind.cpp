#include<bits/stdc++.h>
using namespace std;
const int X=1e3+10;
int parent[X];
int size[X];
void make(int y){
	parent[y]=y;
	size[y]=1;
}
int find(int y){
	if(y==parent[y])
		return y;
	return parent[y]=find(parent[y]);	
}
void Union(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		if(size[a]<size[b])
		swap(a,b);
		parent[b]=a;
	}
	size[a]+=size[b];
}
int main(){
	make(1);
	make(2);
	Union(1,2);
	make(3);
	make(4);
	Union(2,4);
	cout<<"parent of 4 is = "<<find(4);
	return 0;
}
