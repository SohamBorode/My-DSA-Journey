#include <iostream>
#include <string>
#include <vector>
using namespace std;
int count = 0;

void printSubSets(int arr[], vector<int> &set, int sz, int index = 0)
{
    count++;
    if (index == sz)
    {
        cout << "{";
        for (int val : set)
            cout << " " << val << " ";
        cout << "}" << endl;
        return;
    }
    set.push_back(arr[index]); // creates a local set
    printSubSets(arr, set, sz, index + 1); // choice of including element into the container amd recurse call
    set.pop_back();                        // excluding element by backtracking
    printSubSets(arr, set, sz, index + 1); // remaininag possible choice of not containing
}


void printSubSetsOfString(string str, vector<char> &set, int sz, int index = 0)
{
    count++;
    if (index == sz)
    {
        cout << "{ ";
        for (char val : set) cout<<val;
        cout << " }" << endl;
        return;
    }
    set.push_back(str[index]); // creates a local set
    printSubSetsOfString(str, set, sz, index + 1); // choice of including element into the container amd recurse call
    set.pop_back();                        // excluding element by backtracking
    printSubSetsOfString(str, set, sz, index + 1); // remaininag possible choice of not containing
}


int main()
{
    int arr[] = {1, 2, 3};
    vector<int> set;
    int siz = sizeof(arr) / sizeof(arr[0]);
    printSubSets(arr, set, siz);
    cout<<"Number of recursive calls: "<<count<<endl;


    string str = "Soham";
    vector<char> set2;
    printSubSetsOfString(str, set2, str.size());
    cout<<"Number of recursive calls: "<<count<<endl;
    return 0;
}


/*
Time Complexity is: O(n*2^n)
*/