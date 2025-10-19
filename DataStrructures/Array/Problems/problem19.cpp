#include <iostream>
using namespace std;

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
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    leftRotateBy_d(arr2,n2, 5);
    for(int i=0; i<n2 ;i++) cout<<arr2[i]<<" ";
    return 0;
}