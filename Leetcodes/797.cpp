#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> res;
    vector<int> currpath;

    void dfs(int node, int dest, vector<bool> vis, vector<int> adj[])
    {
        vis[node] = true;
        if (node == dest)
        {
            res.push_back(currpath);
            return;
        }
        for (auto it : adj[node])

        {
            if (!vis[it])
            {
                currpath.push_back(it);
                dfs(it, dest, vis, adj);
            }
            vis[it] = false;
            currpath.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        int n = graph.size();
        vector<int> adj[n];
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++)
        {
            /* code */
            for (auto it : graph[i])
            {
                adj[i].push_back(it);
            }
        }
        currpath.push_back(0);
        dfs(0, n - 1, vis, adj);
        return res;
    }
};