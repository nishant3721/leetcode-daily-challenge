// Application: Find the number of occurences of a number in a sorted array
// No. of occurences = lastOccurence - firstOccurence + 1
// Time Complexity: O(logn)
#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int array[], int size, int key)
{
    int s = 0, e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (array[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (array[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOccurence(int array[], int size, int key)
{
    int s = 0, e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (array[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (array[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int array[] = {1, 3, 5, 6, 6, 6, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(int);
    int key = 6;
    int firstOcc = firstOccurence(array, size, key);
    int lastOcc = lastOccurence(array, size, key);
    cout << "First Occurence: " << firstOcc << endl;
    cout << "Last Occurence: " << lastOcc << endl;
    return 0;
}
