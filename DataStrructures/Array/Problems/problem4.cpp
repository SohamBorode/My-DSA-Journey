#include <iostream>
using namespace std;

// Check if an array is sorted.
int main()
{
    int arr[] ={1,2,5,4,8,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    bool result = true;
    while (i<n-1)
    {
        if (arr[i] > arr[i + 1])
        {
            result = false;
            break;
        }
        i++;
    }
    if(result) cout << "Array is sorted" << endl;
    else cout<<"Not sorted"<<endl;

    return 0;
}