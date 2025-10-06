#include <iostream>
#include <limits> // Required for std::numeric_limits
using namespace std;
// Find the second largest element.
//  int secondLarge(int arr[], int n, int index = 0){
//      int larg1 = arr[0];
//      if (index == n)
//      {
//          return larg1;
//      }
//  }

int main()
{
    int arr[] = {4, 24, 7, 1, 71, 224,1452,417,47,774,74, 2, 684, 244,1014, 21};
    int larg1 = arr[0];
    // int larg2 = numeric_limits<int>::min();
    int larg2 = arr[1];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i] > larg1)
        {
            larg2 = larg1;
            larg1 = arr[i];

        }else if(arr[i]>larg2 && arr[i] != larg1){
            larg2 = arr[i];
        }
    }
    cout << "Larger element is: " << larg1 << endl;
    cout << "Scond larger element is: " << larg2 << endl;
    return 0;
}