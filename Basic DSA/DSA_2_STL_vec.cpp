//#include<bits/stdc++.h>
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main(){
    vector<int>vec;
    vector<int>vec1;
    vector<int>vec2 = {1,2,3};
    vector<int>vec3(4,6); // this create a vector containing 4 elements each is 6

//inserting values in vector
//way 1
vec1.push_back(1);
vec1.push_back(4);
vec1.push_back(3);
//way 2
vec1.emplace_back(45);
vec1.emplace_back(65);
vec1.emplace_back(24);

vector<int>vec4(vec1);

cout<<"Vec1: "<<endl;
for(int i =0; i<vec1.size();i++){
    cout<<vec1[i]<<" ";
}

cout<<endl<<"Vec2: "<<endl;
for(int i =0; i<vec2.size();i++){
    cout<<vec2[i]<<" ";
}

cout<<endl<<"Vec3: "<<endl;
for(int i:vec3){ // we can also do use for loop like that3
    cout<<i<<" ";
}

cout<<endl<<"Vec4 (values copied from vec1 to vec4): "<<endl;
for(int i =0; i<vec4.size();i++){
    cout<<vec4[i]<<" ";
}
cout<<endl<<"Memory allocation when we push_back the value: "<<endl;
// memory allocation in vectors when elements are added
    vector<int> v;
    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
        cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    }
/// erase() and insert()
//vec1.erase(vec1.begin()); /// delete the value at 0th index
//vec1.erase(vec1.begin()+3); /// delete the value at (0 + n)th index
for(int val: vec1){
    cout<<val<<" ";
}
cout<<endl;

// Vector Iterator
cout<<"Begin value: "<<*(vec1.begin())<<", End value: "<<*(vec1.end())<<" , End value - 1: "<<*(vec1.end() -1)<<endl;

cout<<"looping using iterator"<<endl;
vector<int>::reverse_iterator rit;
//for(rit = v.rbegin(); rit!=v.rend();rit++){
//    cout<<*rit<<endl;
//}
for(vector<int>::reverse_iterator rit = v.rbegin(); rit!=v.rend();rit++){
    cout<<*rit<<endl;
}
cout<<"'auto' keyword use"<<endl;
for(auto rit = v.begin(); rit!=v.end();rit++){ /// insted of this declaration of iterator variable we can use @auto keyword for automatic type featching according to iterator's
    cout<<*rit<<endl;
}

////empty() function
bool val = vec1.empty();
cout<<"Returns a boolean value: "<<val; //since the vec1 s not empty it returns a false value
return 0;
}

























