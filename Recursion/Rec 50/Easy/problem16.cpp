#include <iostream>
using namespace std;
//Checking is an array is sorted or not
bool isSorted_Acn(int arr[], int sz) {
    // Base case: if size is 0 or 1, array is sorted
    if (sz == 0 || sz == 1) return true;
    // If first element is greater than second, not sorted
    if (arr[0] > arr[1]) return false;
    // Recursively check the rest
    return isSorted_Acn(arr + 1, sz - 1);
}

int main() {
    int arr[]={1,2,7,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted_Acn(arr,n-1);
return 0;
}