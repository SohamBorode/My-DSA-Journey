
#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
void disorsN1(int n) ///Time complexity : O(n)
{
    if(n%2==0)
    {
        cout<<"It it is a even number"<<endl;
        cout<<"Divisor list is:"<<endl;
        for(int i =1; i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<i<<", ";
            }
        }
    }
    else
    {
        cout<<"It it is a odd number"<<endl;
        cout<<"Divisor list is:"<<endl;
        for(int i =1; i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<i<<", ";
            }
        }
    }
}

//much better way

void divisorsN2(int n) {
    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (n / i != i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << "Sorted list of divisors: ";
    for (auto it = divisors.begin(); it != divisors.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
//    disorsN1(num);
    divisorsN2(num);
    return 0;
}
