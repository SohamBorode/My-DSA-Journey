#include <iostream>
using namespace std;
// Move all zeros to the end. Or any given number

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
    int arr[] = {1,2,1,3,4,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"Enter which number you want to move to end: ";
    cin>>target;
    cout<<"Here is your updated array: "<<endl;
    moveToEnd(arr, n, target);
    return 0;
}