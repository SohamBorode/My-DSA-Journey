#include<iostream>
using namespace std;

// Sum of first N numbers

//a) parameterised way
void para_sum(int i, int sum = 0)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    para_sum(i - 1, sum + i);
}

int fun_sum(int n)
{
    if (n>0) return n + fun_sum(n - 1);
    else return 0;
}


void para_fact(int i, int fact = 1)
{
    if(i==0 || i==1){
        cout<<"Factorial: "<<fact;
    }
    else{
        para_fact(i-1, fact*i);
    }
}

int main()
{

//para_sum(10);
    cout<<"Sum: "<<fun_sum(10)<<endl;
    para_fact(5);
    return 0;
}
