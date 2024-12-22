#include <bits/stdc++.h>
using namespace std;
template <typename t>

class genericGraph
{
    map<t, list<t>> adjList;

public:
    genericGraph()
    {
    }

    // To Add The Edges

    void addEdge(t u, t v, bool bidr)
    {
        adjList[u].push_back(v);
        if (bidr)
        {
            adjList[v].push_back(u);
        }
    }

    // For Printing Graph

    void print()
    {
        cout << endl
             << "priniting graph" << endl;

        for (auto i : adjList)
        {
            cout << i.first << "->";

            for (auto entry : i.second)
            {
                cout << entry << " ";
            }
            cout << endl;
        }
    }

    // Breadth First Search

    void bfs(t src)
    {
        cout << "Printing bfs of graph" << endl;
        queue<t> q;
        map<t, bool> visited;

        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            t node = q.front();
            q.pop();
            cout << node << " ";
            for (auto neighour : adjList[node])
            {
                if (!visited[neighour])
                {
                    q.push(neighour);
                    visited[neighour] = true;
                }
            }
        }
    }

    // To Depth First Search
    void dfs(t src)
    {
        cout << endl
             << "Printing Depth First Search" << endl;
        map<t, bool> visited;
        dfsHelper(src, visited);
        for (auto neighours : adjList[src])
        {
            if (!visited[neighours])
            {
                dfsHelper(neighours, visited);
            }
        }
    }

    void dfsHelper(t node, map<t, bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (auto neighours : adjList[node])
        {
            if (!visited[neighours])
            {
                dfsHelper(neighours, visited);
            }
        }
    }

    // Topological sort
};

int main()
{
    genericGraph<int> g;
    g.addEdge(0, 1, true);
    g.addEdge(0, 2, true);
    g.addEdge(0, 3, true);
    g.addEdge(2, 4, true);
    g.print();
    g.bfs(0);
    g.dfs(0);
    return 0;
}