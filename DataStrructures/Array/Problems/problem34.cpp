#include <iostream>
#include <vector>
using namespace std;
// pair of given sum

pair<int, int> pairSum(int arr[], int sz, int sum)
{
    vector<pair<pair<int, int>, int>> vec;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i+1; j < sz; j++)
        {
            pair<pair<int, int>, int> p;
            if (arr[i] == arr[j])
                continue;
            p.first.first = arr[i];
            p.first.second = arr[j];
            p.second = p.first.first + p.first.second;
            vec.push_back(p);
        }
    }
    for (auto it : vec)
    {
        if (it.second == sum)
        {
            return pair(it.first.first, it.first.second);
        }
    }
    return pair(NULL, NULL);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    cout << "Enter sum: ";
    cin >> sum;
    pair<int, int> x = pairSum(arr, n, sum);

    if ((x.first, x.second) == (NULL, NULL) && sum != 0)
        cout << "No pair exist for give sum/(NULL, NULL)" << endl;
    else
        cout <<"Here is the pair: " << "(" << x.first << ", " << x.second << ")" << endl;
    return 0;
}