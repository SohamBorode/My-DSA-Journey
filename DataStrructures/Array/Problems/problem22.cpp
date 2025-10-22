#include <iostream>
#include <vector>
using namespace std;
// Find the leader element.
vector<int> giveLeaders(int arr[], int sz)
{
    vector<int> vec;
    bool isit;
    for (int j = 0; j < sz; j++)
    {
        bool isit = true;
        for (int i = j + 1; i < sz; i++)
        {

            if (arr[j] < arr[i])
            {
                isit = false;
                break;
            }
        }
        if (isit == true)
            vec.push_back(arr[j]);
    }

    return vec;
}

int main()
{
    int arr[] = {10, 22, 9, 12, 0, 6, 1, 2, 5, 3, 2, 4, 2, 0, 1, 0, 8, 1, 5, 6, 7, 4, 6, 9, 4, 5, 2, 3, 1, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec = giveLeaders(arr, n);
    for (int i : vec)
    {
        cout << i << " ";
    }
    return 0;
}