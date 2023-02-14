// Brute force approach
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int array[] = {1, 4, 3, 1, 4, 3, 7};
//     int occurrence[100] = {0};
//     for (int i = 0; i < 7; i++)
//     {
//         occurrence[array[i]]++;
//     }

//     for (int i = 0; i < 100; i++)
//     {
//         if (occurrence[i] == 1)
//         {
//             cout << i << endl;
//             break;
//         }
//     }

//     return 0;
// }

// Optimized approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 4, 3, 1, 4, 3, 7};
    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ array[i];
    }
    cout << ans << endl;
    return 0;
}