#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int s = 5;
    int n = sizeof(array) / sizeof(array[0]);
    sort(array, array + n);
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == s)
            {
                ans.push_back({array[i], array[j]});
            }
        }
    }
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}