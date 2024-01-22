#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, edge;
    cin >> length >> edge;

    int matrix[length][length];
    memset(matrix, 0, sizeof(matrix));

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
        // if not detected graph 
        matrix[b][a] = 1;
    }


    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    if (matrix[3][4] == 1)

        cout << "Connected";
    else
        cout << "Not connected";

    return 0;
}