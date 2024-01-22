#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;
    cin >> node >> edge;
    // Adjacency-List
    vector<int> v[node];

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    // //renge based for loop
    // for (int x : v[0])
    // {
    //     cout << x << " ";
    // }

    for (int i = 0; i < v[0].size(); i++)
    {
        cout << v[0][i] << " ";
    }

    return 0;
}