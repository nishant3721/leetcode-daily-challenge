#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int array[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) <= size)
        {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    swapAlternate(array, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}