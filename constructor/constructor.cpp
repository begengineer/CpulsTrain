#include <iostream>
using namespace std;

// constructorについて
// 初期値を代入するために使用する

// コンストラクタのオーバーロード:関数名が同じでもデータ型が異なればエラーが出ない

class NewClass{
    public:
    int num;
    // 関数のオーバーロード
    NewClass(int a); // オブジェクト生成のタイミングで起動
    NewClass(); // デフォルトコンストラクタ
};

// これは初期化を行うための関数(オブジェクト生成タイミングで実行される)
NewClass::NewClass(int a){
    // 初期化
    num = a;
    cout << "constructor" << endl;
}

NewClass::NewClass(){
    num = 0;
    cout << "default constructor" << endl;
}

int main(){
    NewClass nc;
    return 0;
}