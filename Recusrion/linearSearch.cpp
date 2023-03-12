#include <iostream>
using namespace std;

bool linearSearch(int *arr, int n, int key)
{
    // base case
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, n - 1, key);
        return remainingPart;
    }
}
int main()
{
    int arr[] = {3, 5, 1, 2, 7};
    int n = 5;
    int key = 2;
    bool ans = linearSearch(arr, n, key);
    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }
    return 0;
}