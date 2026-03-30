#include <iostream>
using namespace std;

// 継承とコンストラクタについて
// クラスの継承をした場合前のコンストラクタは呼ばれる
class OldClass{
    public:
        // どちらを呼び出す？
        OldClass();
        OldClass(int a);
};

OldClass::OldClass(){
    // コンストラクタの実装
    cout << "OldClassのコンストラクタ" << endl;
}

OldClass::OldClass(int a){
    // コンストラクタの実装
    cout << "OldClassのコンストラクタ(int a)" << endl;
}


class NewClass : public OldClass{ // OldClassを継承している
    public:
        NewClass();
};

// 派生クラスのコンストラクタで指定
NewClass::NewClass() : OldClass(10){ // OldClassのコンストラクタを呼び出す(どっちのコンストラクタを使用するのかを指定する
    // コンストラクタの実装
    cout << "NewClassのコンストラクタ" << endl;
};

// NewClass::NewClass(){
//     // コンストラクタの実装
//     cout << "NewClassのコンストラクタ" << endl;
// };

// 継承について
int main(){
    NewClass nc;
    return 0;
}