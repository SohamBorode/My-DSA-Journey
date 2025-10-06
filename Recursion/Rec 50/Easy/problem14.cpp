#include <iostream>
#include<string>

using namespace std;
// Print reverse of a string
string reverseStr(string str, int len, int i = 0){
    if(len == str.length() / 2) return str;
    char temp = str[i];
    str[i] = str[len - 1];
    str[len -1] = temp;
     return reverseStr(str, --len, ++i);
}

int main() {
    string str;
    cout<<"Enter a string: ";
    // cin>>str; // only consider non spaced text as a string
    getline(cin,str); // for considering spacecs also
    int strLen = str.length();
    cout<<"Your string: "<<str<<" || It's length: "<<strLen<<endl;
    cout<<"Reversed string: "<<reverseStr(str, strLen)<<endl;

    return 0;
}