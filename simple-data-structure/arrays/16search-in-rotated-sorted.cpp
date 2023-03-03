#include <bits/stdc++.h>
using namespace std;

int getPivot(int array[], int size)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (array[mid] > array[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarySearch(int array[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int array[] = {2, 3, 5, 8};
    int size = sizeof(array) / sizeof(int);
    int key = 2;
    int pivotIndex = getPivot(array, size);
    if (array[pivotIndex] <= key && key <= array[size - 1])
    {
        cout << "Found at index: " << binarySearch(array, pivotIndex, size - 1, key) << endl;
    }
    else
    {
        cout << "Found at index: " << binarySearch(array, 0, pivotIndex - 1, key) << endl;
    }
    return 0;
}