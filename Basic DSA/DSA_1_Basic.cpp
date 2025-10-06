#include<iostream>
using namespace std;

void patern1(int n)
{
    for (int i = 0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void patern2(int n)
{
    for(int i = 0; i<n; i++)
    {
        char ch = 'A';
        for(int j=0; j<=i; j++)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}

void patern3(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = n-1; j>=i; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void patern4(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            cout<<j + 1<<" ";
        }
        cout<<endl;
    }
}

void patern5(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = n-1; j>=i; j--)
        {
            cout<<" ";
        }
        for(int j = i; j>=0 ; j--)
        {
            cout<<"*";
        }
        for(int j = 0; j<i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }



}

void patern6(int n)
{
    for(int i=0; i<n; i++)
    {

        for(int j = 0; j<i; j++)
        {
            cout<<" ";
        }

        for(int j = 0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        for(int j =0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void patern7(int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = n-1; j>i; j--)
        {
            cout<<" ";
        }
        for(int j=0; j<=2*i; j++)
        {
            cout<<"*";
        }
        for(int j = 0; j<n ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++)
    {

        for(int j = 0; j<i; j++)
        {
            cout<<" ";
        }

        for(int j = 0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        for(int j =0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void patern8(int n)
{
    for(int i=1; i<=2*n-1; i++)
    {
        int start = i;
        if(i > n) start = 2*n-i;
        for(int j=1; j<=start; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void patern9(int n)
{
    int start;
    for(int i=0; i<n; i++)
    {
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++)
        {
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
}

void patern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Left side: Increasing numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        // Middle: Spaces
        int spaces = 2 * (n - i - 1);
        for (int s = 0; s < spaces; s++)
        {
            cout << "  "; // two spaces for alignment
        }
        // Right side: Decreasing numbers
        for (int j = i; j >= 0; j--)
        {
            cout << j + 1 << " ";
        }

        cout << endl;
    }

}

void patern11(int n)
{
    int x = 1;
    for(int i =1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<x++<<" ";
        }
        cout<<endl;
    }
}

void patern12(int n)
{
    for(int i=0; i<n; i++)
    {
        char ch = 'A';
        for(int j=n; j>i; j--)
        {
            cout<<ch++<<" ";
        }
        cout<<endl;
    }

}

void patern13(int n)
{
    char ch ='A';
    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {

            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

void patern14(int n)
{
    char ch ='A';
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

void patern15(int n)
{
    for(int i =0; i<n; i++)
    {
        char ch ='A';
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        int breakPoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++)
        {
            cout<<ch;
            if (j<breakPoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        cout<<endl;
    }
}

void patern16(int n)
{
    char ch='A';
    for(int i=n-1; i>=0; i--)
    {

        for(int j = i; j<=n; j++)
        {
            cout<<ch;
            ch--;
        }

        cout<<endl;
    }
}

void patern17(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

     for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void patern18(int n)
{
    for(int i=1;i<=2*n-1;i++){
            int start = i;
            if(i>n) start = 2*n-i;
        for(int j=1;j<=start;j++){
            cout<<"*";
        }


        int space = 2*n-2*i;
        if (i>n) space = n;
        for(int j=1; j<=space;j++){
             cout<<"_";
        }

        int start2 = i;
        if(i == 7) start2 =2*n-i;
        for(int j=1; j<=start2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}




int main()
{
    int t;
    cout<<"Enter number of trials: ";
    cin>>t;
    for(int i =0; i<t; i++)
    {
        int n;
        cout<<"Enter no. of rows: ";
        cin>>n;
//        patern1(n);
//        patern2(n);
//        patern3(n);
//        patern4(n);
//        patern5(n);
//        patern6(n);
//        patern7(n);
//        patern8(n);
//        patern9(n);
//        patern10(n);
//        patern11(n);
//        patern12(n);
//        patern13(n);
//        patern14(n);
//        patern15(n);
//        patern16(n);
//        patern17(n);
    patern18(n);

    }
    return 0;
}
