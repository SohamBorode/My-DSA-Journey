#include <iostream>
using namespace std;
//find max value from array using recursion

int maxElement(int arr[], int sz, int i =0){
    if(i == sz -1) return arr[i];
    int max_rest = maxElement(arr, sz, i + 1);
    return (arr[i] > max_rest) ? arr[i] : max_rest;
}

int main() {
    int arr[] = {4,2,5,3,4,7,8,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = maxElement(arr, n);
    cout << maxVal << endl;
    return 0;
}