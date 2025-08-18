#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            cnt++;
        }
    }
    int pvtindx = s + cnt;
    swap(arr[pvtindx], arr[s]);
    int i = s;
    int j = e;
    while (i < pvtindx && j > pvtindx)
    {
        while (i < pvtindx && arr[i] <= pivot)
        {
            i++;
        }
        while (j > pvtindx && arr[j] > pivot)
        {
            j--;
        }
        if (i < pvtindx && j > pvtindx)
        {
            swap(arr[i++], arr[j--]);
        }
    }
return pvtindx;
}

int quick_sort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int p = partition(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
    return 0;
}
int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}