#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
	//Function to return the adjacency list for each vertex.
	vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	    vector<vector<int>> adj_mat;
	    
	    for (int v=0; v < V; ++v)
        {
            vector<int> adj_list;
            adj_list.push_back(v);
            for (auto x : adj[v])
               adj_list.push_back(x);
            adj_mat.push_back(adj_list);
        }
        
        return adj_mat;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<vector<int>>ans=obj.printGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	for(int j=0;j<ans[i].size()-1;j++){
        		cout<<ans[i][j]<<"-> ";
        	}
        	cout<<ans[i][ans[i].size()-1];
        	cout<<endl;
        }
	}
	return 0;
}
