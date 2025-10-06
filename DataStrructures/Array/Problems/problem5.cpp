#include <iostream>
using namespace std;
// Reverse an array.

int main() {
int arr[] = {1,2,3,4,5};
cout<<"Orginal array:"<<endl;
for(int i : arr) cout<<i<<" ";
for(int i = 0;i < 5/2;i++){
    arr[i] = arr[i] + arr[5-1-i];
    arr[5-1-i] = arr[i] - arr[5-1-i];
    arr[i] = arr[i] - arr[5-1-i];
}    
cout<<endl<<"Reversed array:"<<endl;
for(int i : arr) cout<<i<<" ";
    return 0;
}