#include <iostream>
using namespace std;

int findPivoitIndex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
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

int main()
{
    int even[5] = {3, 8, 10, 17, 1};
    cout << " Pivoit Index is " << findPivoitIndex(even, 5) << endl;
    return 0;
}