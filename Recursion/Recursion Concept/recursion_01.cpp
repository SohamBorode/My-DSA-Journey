#include<bits/stdc++.h>
using namespace std;

void pname(string name, int num)
{
    if(num > 0)
    {
        cout<<name<<endl;
        num--;
        pname(name, num);
    }
}

void printNname(int i, int n)
{
    if (i>n)
    {
        return;
    }
    else
    {
        cout<<"Soham"<<endl;
        printNname(i+1, n);
    }
}

void printN_1(int n)
{
    if(n<=0)
    {
        return;
    }
    else
    {
        cout<<n<<endl;
        printN_1(--n);
    }
}



int main()
{
    int n;
    cout<<"Enter number of times you want: ";
    cin>>n;
//    printNname(1, n);
    printN_1(n);

    return 0;
}
