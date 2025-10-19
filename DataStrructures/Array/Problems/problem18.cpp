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

// Left rotate an array by d places
void leftRotateBy_d(int arr[], int sz, int d = 1)
{
    while(d!=0){
    int temp = arr[0];
    for (int i = 0; i < sz; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[sz - 1] = temp;
    d--;
}
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    leftRotate(arr1, n1);
    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";
    cout<<endl;
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    leftRotateBy_d(arr2,n2, 5);
    for(int i=0; i<n2 ;i++) cout<<arr2[i]<<" ";
    return 0;
}