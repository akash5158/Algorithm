#include<iostream>
#include<stack>
#define X 6
using namespace std;

int graph[X][X] = {
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0},
   {0, 0, 0, 1, 0, 0},
   {0, 1, 0, 0, 0, 0},
   {1, 1, 0, 0, 0, 0},
   {1, 0, 1, 0, 0, 0}
};

void Topological(int u, bool visit[], stack<int>&sk) {
   visit[u] = true;               

   for(int v = 0; v<X; v++) {
      if(graph[u][v]) { 
         if(!visit[v])
            Topological(v, visit, sk);
      }
   }
   sk.push(u); 
}

void TopologicalSort() {
   stack<int> sk;
   bool vis[X];

   for(int i = 0; i<X; i++)
      vis[i] = false;  

   for(int i = 0; i<X; i++)
      if(!vis[i]) 
         Topological(i, vis, sk);

   while(!sk.empty()) {
      cout << sk.top() << " ";
      sk.pop();
   }
}

int main() {
   cout << "After topological sorted order: ";
   TopologicalSort();
   return 0;
}
