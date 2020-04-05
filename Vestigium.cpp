#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k = 0, r = 0, c = 0,n;
    cin >> t;
    cin >> n;
    vector< vector < int > > arr(n, vector<int>(n));
    bool flagR = false;
    set<int> column; bool flagC = false;
    set<int> row;

    for (int x = 1; x <= t; x++)
    {
        for (int i = 0; i < n; i++)
        {
            row.clear();
            flagR = false;
            for (int j = 0; j < n; j++)
            {
                int value;
                cin >> value;
                arr[i][j] = value;
                if (i == j)
                {
                    k = k + value;
                }
                if (row.count(value) == 1 && !flagR)
                {
                    r++;
                    flagR = true;
                }
                else
                {
                    row.insert(value);
                }
            }
        }


        for (int i = 0; i < n; i++)
        {
            column.clear();
            flagC = false;
            for (int j = 0; j < n; j++)
            {
                if (column.count(arr[j][i]) == 1 && !flagC)
                {
                    c++;
                    flagC = true;
                }
                else
                    column.insert(arr[j][i]);
            }
        }
        cout << "Case #" << x << ": " << k << " " << r << " " << c << "\n";
    }
    return 0;
}
