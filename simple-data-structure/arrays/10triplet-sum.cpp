#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {10, 5, 5, 5, 2};
    int s = 12;
    int n = sizeof(array) / sizeof(array[0]);
    sort(array, array + n);
    vector<vector<int>> ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (i > 0 && array[i] == array[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = array[i] + array[left] + array[right];
            if (sum == s)
            {
                ans.push_back({array[i], array[left], array[right]});
                while (left < right && array[left] == array[left + 1])
                    left++;
                while (left < right && array[right] == array[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < s)
            {
                left++;
            }
            else
            {
                right--;
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