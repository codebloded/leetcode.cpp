#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        if (arr[mid] < k)
        {
            // right
            s = mid + 1;
        }
        else
        {
            // left
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {0, 3, 2, 2, 2, 2};
    cout << " First Occurence of 2 is at index  : " << firstOcc(even, 6, 2) << endl;
    cout << " Last Occurence of 2 is at index  : " << lastOcc(even, 6, 2) << endl;
    return 0;
}