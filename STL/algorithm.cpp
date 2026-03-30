#include <iostream>
using namespace std;
#include <iterator>
#include <vector>
#include <algorithm>

int main(){
    int i;
    vector<int> array;
    cout << "数を5つ入力してください。" << endl;
    
    for(int i = 0;i < 5;i++){
        int data;
        cin >> data;
        array.push_back(data);
    }

    // ソートをする
    sort(array.begin(),array.end());
    cout << "ソート後の配列の内容は以下の通りです。" << endl;
    vector<int>::iterator it = array.begin();
    for(;it != array.end();it++){
        cout << *it << endl;
    }

    return 0;

}