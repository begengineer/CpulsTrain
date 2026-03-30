#include <iostream>
using namespace std;

// constructorについて
// 初期値を代入するために使用する

// コンストラクタのオーバーロード:関数名が同じでもデータ型が異なればエラーが出ない
// デストラクタ:オブジェクトが破棄されるときに自動的に呼び出される関数
// コピーコンストラクタ:オブジェクトをコピーするためのコンストラクタ

class NewClass{
    public:
    int num;
    // 関数のオーバーロード
    NewClass(int a); // オブジェクト生成のタイミングで起動
    NewClass(); // デフォルトコンストラクタ
    NewClass(const NewClass &obj); // コピーコンストラクタ
    ~NewClass(); // デストラクタ
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

NewClass::NewClass(const NewClass &obj){
    num = obj.num;
    cout << "copy constructor (引数: const NewClass &obj)" << endl;
}

// デストラクタはオブジェクトが破棄されるときに自動的に呼び出される関数
NewClass::~NewClass(){
    cout << "destructor" << endl;
}

int main(){
    // コピーコンストラクタ
    NewClass nc;
    NewClass nc2 = nc; // コピーコンストラクタが呼び出される(コンストラクタは発動しない)
    return 0;
}