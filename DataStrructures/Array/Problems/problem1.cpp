#include <iostream>
using namespace std;
int recCalls = 0;
// 1. Find the largest element in an array.
int findGretest(int arr[], int n, int index = 0){
    recCalls++;
    int large = arr[0];
    if(index == n) return large;
    int large_in_rest =  findGretest(arr + 1, n, index + 1 );
    return (large>large_in_rest) ? large : large_in_rest;
    
}
int main() {
    int arr[] = {4,24,7,1,71,2,2,684,244,21};
    int larg = arr[0];
    for(int i= 0; i<10; i++){
        if(arr[i]>=larg){
         larg = arr[i];
        }
    }
    cout<<"Larger element is: "<<larg<<endl;
    cout<<"Larger element is: "<<findGretest(arr, 10)<<endl<<"Recursion calls: "<<recCalls;
    return 0;
}