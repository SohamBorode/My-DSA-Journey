#include <iostream>
#include<string>
using namespace std;

int stringLen(string str) {
    // char *ptr = &str[0];
    if(str.empty()) return 0;
    return 1 + stringLen(str.substr(1));
}

//alternatives
 //1) Using Pointer Arithmetic (without creating new string): - it call function recursively till the inted is not equal to the length of the strin
 int stringLenPointer(const string& str, int index = 0) {
    if (index == str.size()) return 0;   // Base case: reached end
    return 1 + stringLenPointer(str, index + 1);  // move to next char
}
 //2) Loser to array-pointer approach (like char*)
int stringLenCharPointer(const char* ptr) {
    if (*ptr == '\0') return 0;          // Base case: end of string
    return 1 + stringLenCharPointer(ptr + 1);  // move pointer to next char
}
int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"Length: "<<stringLen(str)<<endl;
    cout<<"Length: "<<stringLenPointer(str)<<endl;
    cout<<"Length: "<<stringLenCharPointer(&str[0])<<endl;
    
    return 0;
}