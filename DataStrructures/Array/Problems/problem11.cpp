#include<bits/stdc++.h>
using namespace std;
const int  maxSiz = 100;
// Find the frequency of each element.
void removeDup(int arr[], int sz){
    int freqArr[maxSiz]={0};
    for(int i = 0; i<sz ; i++){
            freqArr[arr[i]] += 1;
    }

    for(int i: freqArr) cout<<i<<" ";

    cout<<"After removing duplicates: "<<endl;

}
 
int main() {
    int arr[] = {1,2,3,3,4,5,6,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeDup(arr, n);
    return 0;
}