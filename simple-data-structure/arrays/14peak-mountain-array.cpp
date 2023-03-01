#include <bits/stdc++.h>
using namespace std;

int peakElement(int array[], int size)
{
    int s = 0, e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (array[mid] < array[mid + 1])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}

int main()
{
    int array[] = {0, 2, 1, 0};
    int size = sizeof(array) / sizeof(int);
    int peak = peakElement(array, size);
    cout << peak << endl;
    return 0;
}