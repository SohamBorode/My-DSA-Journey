#include<bits/stdc++.h>
using namespace std;

int call_count = 0;
int fibonacci(int n){
    call_count++;
    if(n<=1) {return n;}
    return fibonacci(n-1) + fibonacci(n-2);
}
int fibonacci2(int n) {
    if (n <= 1) return n;
    int prev2 = 0, prev1 = 1, curr;
    for (int i = 2; i <= n; ++i) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout << "Fibonacci of " << n << " place is " << fibonacci2(n) << endl;
    int result = fibonacci(n);
    cout<<"Fibonacci of "<<n<<" place is "<<result<<endl;
    cout<<"Total recursion calls: "<<call_count<<endl<<endl;
    return 0;
}



