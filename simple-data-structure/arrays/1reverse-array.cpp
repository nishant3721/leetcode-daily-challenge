#include <bits/stdc++.h>
using namespace std;
int *reverseArray(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    return array;
}

int main()
{
    int array[] = {8, 3, 6, 2, 7, 3};
    cout << "Original array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Reversed array: ";
    int *reversedArray = reverseArray(array, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << reversedArray[i] << " ";
    }

    return 0;
}