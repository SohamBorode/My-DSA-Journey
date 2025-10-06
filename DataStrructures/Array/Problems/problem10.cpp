#include <iostream>
using namespace std;
// Move all zeros to the end.
int main()
{
    int arr[] = {1, 2, 0, 4, 0, 5, 0, 6, 7, 8, 0, 2, 0, 4, 2, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int no_of_zero = 0;
    for (int i : arr)
    {
        if (arr[i] == 0)
            no_of_zero++;
    }

    for (int j = 1; j <= no_of_zero; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 0 && arr[i + 1] != 0)
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i : arr)
        cout << i << " ";
    return 0;
}