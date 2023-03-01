#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {2, 0, 1, 0, 2, 0, 1, 2, 0, 1, 0, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
            c1++;
        else if (array[i] == 1)
            c2++;
        else
            c3++;
    }
    for (int i = 0; i < c1; i++)
    {
        array[i] = 0;
    }
    for (int i = c1; i < c1 + c2; i++)
    {
        array[i] = 1;
    }
    for (int i = c1 + c2; i < n; i++)
    {
        array[i] = 2;
    }
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}