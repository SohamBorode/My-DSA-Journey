#include <iostream>
#include <set>
#include <vector>
using namespace std;
// Find the union of two sorted/unsorted arrays.

void unionOf(int arr1[], int arr2[], int n1, int n2)
{
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.emplace(arr1[i]);
    }
    for (int j = 0; j < n2; j++)
    {
        st.emplace(arr2[j]);
    }
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
}

vector<int> sortedArrar(int arr1[], int sz1, int arr2[], int sz2)
{
    int i = 0, j = 0;
    vector<int> unionArr;
    while (i < sz1 && j < sz2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    return unionArr;
}

int main()
{
    int arr1[] = {1, 1, 2, 2, 3, 4};
    int arr2[] = {2, 3, 4, 4, 5, 6, 6, 7, 7, 8, 6, 4, 7, 8, 9, 10, 12, 14, 1, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);
    unionOf(arr1, arr2, n1, n2);
    cout << endl
         << "More optimised: 2 pointer approch" << endl;
    vector<int> Union = sortedArrar(arr1, n1, arr2, n2);
    for (auto it : Union)
    {
        cout << it << " ";
    }
    return 0;
}