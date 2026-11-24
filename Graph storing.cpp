#include<bits/stdc++.h>
using namespace std;

int main() {
    //Storing the graph in memory as an Edge List.
    /*  int num_of_nodes,num_of_edges;
      cin>>num_of_nodes>>num_of_edges;

      vector<pair<int,int>> edge_list(num_of_edges) ;

      for(int i=0;i<num_of_edges;i++) {
          cin>>edge_list[i].first>>edge_list[i].second;
      }

      for(int i=0;i<num_of_edges;i++) {
          cout<<edge_list[i].first<<" "<<edge_list[i].second<<endl;
      }*/

    //Storing the graph in memory as an Adjacency Matrix.

    /*int num_of_nodes,num_of_edges;
    cin>>num_of_nodes>>num_of_edges;

    vector<vector<int>>Adjacency_Matrix (num_of_nodes+1,vector<int>(num_of_edges+1,0));

    for(int i=0;i<num_of_edges;i++) {
        int u,v; cin>>u>>v;
        Adjacency_Matrix[u][v]=1;
        Adjacency_Matrix[v][u]=1;
    }

    for(int i=1;i<=num_of_nodes;i++) {
        for(int j=1;j<=num_of_nodes;j++) {
            cout<<Adjacency_Matrix[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //Storing the graph in memory as an Adjacency List.
    int num_of_nodes,num_of_edges;
    cin>>num_of_nodes>>num_of_edges;

    vector<vector<int>> adj_list(num_of_nodes+1);
    for(int i=1;i<=num_of_edges;i++) {
        int u,v; cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for(int i=1;i<=num_of_nodes;i++) {
        cout<<i<<": ";
        for (auto v : adj_list[i]) {
            cout<<v<<" ";
        }
        cout<<endl;
    }


}