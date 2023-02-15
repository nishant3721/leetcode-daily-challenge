#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 4, 3, 4, 1};
    int arraySize = sizeof(array) / sizeof(array[0]);
    sort(array, array + arraySize);
    vector<int> ans;
    for (int i = 0; i < arraySize - 1; i++)
    {
        int temp = array[i] ^ array[i + 1];
        if (temp == 0)
        {
            ans.push_back(array[i]);
            i++;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}