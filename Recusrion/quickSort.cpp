#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{
    // take pivot
    int pivot = arr[s];
    // find elements smaller than pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    // maintain condition <a|a|>a
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // sort left part by Quick sort
    quickSort(arr, s, p - 1);

    // sort right
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int n = 10;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
