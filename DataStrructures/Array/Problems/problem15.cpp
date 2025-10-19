#include <iostream>
#include <vector>
using namespace std;
// Find the intersection of two arrays.
void interSectionOf(int arr1[], int arr2[], int sz1, int sz2)
{
    vector<int> hashArr;
    for(int i=0; i<sz1; i++){
        for(int j=0; j<sz2; j++){
            if(arr1[i] == arr2[j]){
                hashArr.push_back(arr1[i]);
            }
        }
    }
    cout<<"Intersection of give sets is:"<<endl<<"{ ";
    for(auto it = hashArr.begin(); it<hashArr.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"}";
}
int main()
{
    int arr1[] = {1, 2, 3,4,5,6,7,8,9,10};
    int arr2[] = {1, 4, 7, 8, 9, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);
    interSectionOf(arr1, arr2, n1, n2);
    return 0;
}