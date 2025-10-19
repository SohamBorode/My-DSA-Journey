#include <iostream>
#include <set>
#include <vector>
using namespace std;
// Remove duplicates from a sorted array.

// 1. Brute force approch: store the elemenet in a containere like set where only unique elements are stored set and duplicates are automatically removed
void bruteForce(int arr[], int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.emplace(arr[i]);

    int index = 0;
    for (auto it : s)
    {
        arr[index] = it;
        index++;
    }
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 2. Two pointer approch(optimised than 1):
void TowPointer(int arr[], int sz)
{
    int i = 0;
    for (int j = 1; j < sz; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    for (int k = 0; k < i-1; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bruteForce(arr, n);
    TowPointer(arr, n);
    return 0;
}