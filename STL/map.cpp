#include <iostream>
using namespace std;
#include <vector>
#include <map>

int main(){
    map<string, string> obj;
    obj.insert(make_pair("name", "John"));
    obj.insert(make_pair("age", "30"));
    cout << obj["name"] << endl;
    cout << obj["age"] << endl;

    return 0;
}