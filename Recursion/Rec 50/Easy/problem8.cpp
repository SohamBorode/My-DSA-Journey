#include <iostream>
#include<algorithm>

using namespace std;
// Calculate GCD/HCF of two numbers
int HCF(int n1, int n2){
int mx = max(n1, n2);
int mn = min(n1, n2);

if( mn == 0) return mx;
int rem = mx % mn;
   return HCF(mn, rem);
}
int main() {
    cout<<HCF(391, 667);
    return 0;
}

/*
//Method 1: Using Euclidean Algorithm (works in all C++ versions)

#include <iostream>
using namespace std;

int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // a will contain the HCF
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF of " << num1 << " and " << num2 
         << " is: " << hcf(num1, num2) << endl;
}
*/

/*
//Method 2: Using std::gcd (C++17+ only)

#include <iostream>
#include <numeric>   // for std::gcd

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "HCF of " << num1 << " and " << num2 
              << " is: " << std::gcd(num1, num2) << std::endl;
}

*/