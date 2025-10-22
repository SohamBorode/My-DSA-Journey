#include <iostream>
using namespace std;

// Left rotate an array by d places
void leftRotateBy_d(int arr[], int sz, int d = 1)
{
    while (d != 0)
    {
        int temp = arr[0];
        for (int i = 0; i < sz; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[sz - 1] = temp;
        d--;
    }
}
// More optimised:- By shifiting block to block
void leftRotD(int arr[], int sz, int d)
{
    int temp[d];
    for (int j = 0; j < d; j++)
    {
        temp[j] = arr[j];
    }
    for (int i = d; i < sz; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int k = sz - d; k < sz; k++)
    {
        arr[k] = temp[k-(sz-d)];
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int place;
    cout << "Enter number of places to br shift: ";
    cin >> place;
    leftRotateBy_d(arr1, n1, place);
    for (int i = 0; i < n1; i++)
    cout << arr1[i] << " ";
    
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n2 = sizeof(arr1) / sizeof(arr1[0]);
    cout << endl << "Enter number of places to be shift: ";
    cin >> place;
    leftRotD(arr2, n2, place%n2);
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    return 0;
}