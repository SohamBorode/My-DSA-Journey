#include <iostream>
using namespace std;
// Right rotate an array by one.
void rightRotate(int arr[], int sz)
{
    int temp = arr[sz - 1];
    for (int i = sz - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
// Right rotate an array by d places.
void rightRotateBy_d(int arr[], int sz, int d = 1)
{
    while (d != 0)
    {
        int temp = arr[sz - 1];
        for (int i = sz - 1; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        d--;
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    rightRotate(arr1, n1);
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    cout << endl;
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    rightRotateBy_d(arr2, n2, 3);
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";

    return 0;
}