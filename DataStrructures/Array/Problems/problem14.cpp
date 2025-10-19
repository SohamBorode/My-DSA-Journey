#include <iostream>
using namespace std;
// Find the repeating number.
void whoHavCopies(int arr[], int sz, int max)
{
    int hashArr[max + 1] = {0};
    for (int i = 0; i < sz; i++)
    {
        if (hashArr[arr[i]] > 0)
            hashArr[arr[i]]++;
        else
            hashArr[arr[i]] = 1;
    }
    for (int i = 0; i < max + 1; i++)
        if (hashArr[i] > 1)
        {
            int count = 0;
            cout << "The number " << i;
            while (hashArr[i] != 0)
            {
                count++;
                hashArr[i]--;
            }
            cout << " repeated " << count << " times" << endl;
        }
}
int main()
{
    int arr[] = {1,1,1,1,1, 2, 2, 3, 4, 5, 5,5, 10};

    int n = sizeof(arr) / sizeof(arr[0]);
    int maxNum = 10;
    whoHavCopies(arr, n, maxNum);

    return 0;
}