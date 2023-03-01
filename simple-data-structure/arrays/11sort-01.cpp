#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {0, 1, 0, 0, 1, 0, 1, 0, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (left < right && array[left] == 0)
            left++;
        while (left < right && array[right] == 1)
            right--;
        swap(array[left], array[right]);
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}