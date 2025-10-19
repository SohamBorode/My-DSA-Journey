#include <iostream>
using namespace std;
// Left rotate an array by one place.
void leftRotate(int arr[], int sz)
{
    int temp = arr[0];
    for (int i = 0; i < sz; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[sz - 1] = temp;
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    leftRotate(arr1, n1);
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    return 0;
}