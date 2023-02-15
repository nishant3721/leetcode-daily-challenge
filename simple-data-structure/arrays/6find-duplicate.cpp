#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 1, 6, 7, 8, 9, 5};
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        // Storing the resultant XOR of all the elements in an array
        ans = ans ^ array[i];
    }

    for (int i = 1; i < 10; i++)
    {
        ans = ans ^ i;
    }

    cout << ans << endl;

    return 0;
}