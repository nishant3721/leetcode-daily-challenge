#include <bits/stdc++.h>
using namespace std;

int getPivot(int array[], int size)
{
    int s = 0, e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (array[mid] > array[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int main()
{
    int array[] = {7, 9, 1, 2, 3, 4};
    int size = sizeof(array) / sizeof(int);
    int pivotElement = getPivot(array, size);
    cout << pivotElement << endl;
    return 0;
}