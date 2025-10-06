#include <iostream>
using namespace std;
int sumOfN(int num){
    if(num > 0) return num + sumOfN(num -1);
     return 0;
    
}
int main() {
    cout<<sumOfN(10);
    return 0;
}