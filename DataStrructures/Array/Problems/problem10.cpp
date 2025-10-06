#include <iostream>
using namespace std;
// Move all zeros to the end.

void moveToEnd(int arr[], int n, int target){
    int no_of_target = 0;
    for (int i=0; i<n;i++)
    {
        if (arr[i] == target)
            no_of_target++;
    }

    for (int j = 1; j <= no_of_target; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == target && arr[i + 1] != target)
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
     for (int i = 0; i<n;  i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1, 2,1,1,0,4,5,1,0,2,4,0,1,1,1,3,4,1,0, 2, 0, 1, 0, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveToEnd(arr, n, 1);
    return 0;
}