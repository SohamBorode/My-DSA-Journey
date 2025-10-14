#include <iostream>
using namespace std;
// Find the smallest element.
int main() {
    int arr[] = {4, 24,1, 7, 2,1, 71, 224,1452,417,47,774,74, 2, 684, 244,1014, 21};
    int min = arr[0];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] < min) min = arr[i];
    }
    cout<<"Minimum element: "<<min;

    return 0;
}