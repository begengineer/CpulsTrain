#include <iostream>
using namespace std;

// constructorについて
// 初期値を代入するために使用する

class NewClass{
    public:
    int num;
    NewClass(int a); // オブジェクト生成のタイミングで起動
};

// これは初期化を行うための関数(オブジェクト生成タイミングで実行される)
NewClass::NewClass(int a){
    // 初期化
    num = a;
    cout << "constructor" << endl;
}

int main(){
    NewClass nc(5);
    cout << nc.num << endl;
    return 0;
}