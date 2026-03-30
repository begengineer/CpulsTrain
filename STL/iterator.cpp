#include <iostream>
using namespace std;
#include <iterator>
#include <vector>

int main(){
    vector<int> array;
    int num;
    cout << "配列数はいくつですか？" << endl;
    cin >> num;
    for(int i = 0;i < num;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    
    cout << "配列の内容は以下の通りです。" << endl;
    vector<int>::iterator it = array.begin();
    for(;it != array.end();it++){
        cout << *it << endl;
    }

    return 0;
}