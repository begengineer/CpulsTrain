#include <iostream>
// 動的にサイズを変更できる配列
#include <vector>
using namespace std;

int main(){
    // 配列の宣言
    vector<int> array;
    array.push_back(10);

    cout << array[0] << endl;

    return 0;
}