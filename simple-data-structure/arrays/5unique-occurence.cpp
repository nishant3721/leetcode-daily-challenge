// Brute force approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 4, 3, 1, 4, 3, 7};
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int i = 0;
    while (i < arr.size())
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(count);
        i += count;
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() - 1; i++)
    {
        if (ans[i] == ans[i + 1])
        {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;
}