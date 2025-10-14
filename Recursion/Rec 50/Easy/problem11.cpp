#include <iostream>
using namespace std;
//finding minimum element in an array by recursion

int minElement(int arr[], int sz, int i = 0) {
    if (i == sz - 1) {
        return arr[i];
    }
    int min_rest = minElement(arr, sz, i + 1);
    return (arr[i] < min_rest) ? arr[i] : min_rest;
}
int main() {
    int arr[] = {4,2,5,3,4,7,8,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minVal = minElement(arr, n);
    cout << minVal << endl;
    return 0;
}