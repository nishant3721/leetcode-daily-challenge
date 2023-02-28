// Find the intersection between the two arrays, provided that the array are sorted in ascending order
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[] = {1, 2, 2, 1};
    int array2[] = {2, 2};
    vector<int> ans;
    int i = 0, j = 0;
    while (i < sizeof(array1) / sizeof(int) && j < sizeof(array2) / sizeof(int))
    {
        if (array1[i] == array2[j])
        {
            ans.push_back(array1[i]);
            i++;
            j++;
        }
        else if (array1[i] < array2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}