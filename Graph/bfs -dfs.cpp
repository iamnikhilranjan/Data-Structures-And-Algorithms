#include <bits/stdc++.h>
using namespace std;

class Solution {
private:

	void bfs(int node, vector<int> adj[], int vis[],
	         vector<int> &ans) {

		queue<int> q;

		q.push(node);

		while(!q.empty()) {

			int node = q.front();
			q.pop();

			ans.push_back(node);

			for(auto it : adj[node]) {

				if(!vis[it]) {
					vis[it] = 1;
					q.push(it);
				}
			}
		}

		return;
	}


	void dfs(int node, vector<int> adj[], int vis[],
	         vector<int> &ans) {

		vis[node] = 1;

		ans.push_back(node);

		for(auto it : adj[node]) {

			if(!vis[it]) {

				dfs(it, adj, vis, ans);
			}
		}
	}

public:

	vector<int> dfsOfGraph(int V, vector<int> adj[]) {
		int vis[V] = {0};

		vector<int> ans;

		for(int i=0; i < V; i++) {

			if(vis[i] == 0) {

				dfs(i, adj, vis, ans);
			}
		}

		return ans;
	}

	vector<int> bfsOfGraph(int V, vector<int> adj[]) {

		int vis[V] = {0};

		vector<int> ans;

		for(int i=0; i < V; i++) {

			if(vis[i] == 0) {
			    
                vis[i] = 1;
                
				bfs(i, adj, vis, ans);
			}
		}

		return ans;
	}
};