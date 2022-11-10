#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    cout << " Index of 8 is : " << binarySearch(even, 6, 12) << endl;

    int odd[5] = {
        3,
        6,
        9,
        12,
        15,
    };
    cout << " Index of 15 is : " << binarySearch(odd, 5, 15) << endl;
    return 0;
}
