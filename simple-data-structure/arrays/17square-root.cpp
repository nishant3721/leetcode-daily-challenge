#include <bits/stdc++.h>
using namespace std;

int getSquareRoot(int n)
{
    int s = 0, e = n;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double withPrecision(int n, int tempAns, int precisionCount)
{
    double decPoint = 1;
    double ans = tempAns;
    for (int i = 0; i < precisionCount; i++)
    {
        decPoint = decPoint / 10;
        for (double j = ans; j * j < n; j = j + decPoint)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    double squareRoot = withPrecision(n, getSquareRoot(n), 3);
    cout << squareRoot << endl;
    return 0;
}