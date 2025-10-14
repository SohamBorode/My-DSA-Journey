#include <iostream>
using namespace std;
//Print array element using recursion
void PrintArr(int arr[], int sz, int i = 0){
    if(i == sz ) return;
    cout<<arr[i]<<" ";
    PrintArr(arr, sz, i + 1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    PrintArr(arr, n);
    return 0;
}