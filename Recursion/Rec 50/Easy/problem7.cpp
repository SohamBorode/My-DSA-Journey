#include <iostream>
#include<string>
using namespace std;
//Check if a string is palindrome
string chkPalidrom(string str){
    int  i =0, j =str.length() - 1;
    string temp =str;
    for(char&c : temp){
        c = tolower(c);
    }
    cout<<str<<" :";
    while(i<j){
        if(temp[i] != temp[j]) return "Not a Plaidrome";
        i++;
        j--;
    }
    return "Is Palidrome";
}

int main() {
    cout<<chkPalidrom("Pop");
    return 0;
}