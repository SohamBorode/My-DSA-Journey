#include<iostream>
#include<map>
using namespace std;
/*
int main(){
map<string, string> m;
m["Name"] = "Soham";
m["Marks"] = "618";
m["Roll_No"] ="199";
m["Branch"] = "AI&DS";

cout<<m.at("Name")<<endl;
for(map<string, string>::iterator it = m.begin();it != m.end();it++){
    cout<<it->first<<" : " <<it->second<<endl;
}
cout<<"-------------------------"<<endl;
m.insert({"Address", "Ploat no, 69"});
m.insert({"Village", "Anjangoan Surji"});

for(auto a: m){
    cout<<a.first<<" : "<<a.second<<endl;
}

//find() : finids a key or key:value pair.
        // If found: returns 'iterator' or if not_found: returns 'm.end()'

return 0;
}
*/

///What if i want to set keys as string datatype and there values to some integer, string, float, char of map data structure in cpp
/*
#include <iostream>
#include <map>
#include <string>
#include <variant>

using namespace std;

// Define the variant to include all types you might need
using VarType = variant<int, float, string, char>;
int main() {
    map<string, VarType> myMap;

    myMap["age"] = 25;
    myMap["pi"] = 3.1415f;
    myMap["name"] = string("Soham");
    myMap["grade"] = 'A';

    // Access and print
    for (const auto& [key, value] : myMap) {
        cout << key << ": ";
        visit([](auto&& arg) { cout << arg << endl; }, value);
    }

    return 0;
}
*/

/**MULTIMAPS**/
 int main(){
multimap<string, int> m;
m.emplace("tv", 1000);
m.emplace("tv", 1000);
m.emplace("tv", 1000);
m.emplace("tv", 1000);

for(pair<string, int> a : m){ //OR use
    cout<<a.first<<" : "<<a.second<<endl;
}


return 0;
}

////
