#include <iostream>
using namespace std;

// staticについて
// クラスのメンバ関数やメンバ変数にstaticをつけると、クラス全体で共有されるようになる
// クラスのオブジェクトを生成しなくてもアクセスできるようになる

class MyClass{
    public:
        static int num; // staticなメンバ変数
};

// staticなメンバ変数はクラス全体で共有されるため、クラス名を使ってアクセスすることができる
int MyClass::num = 10; // staticなメンバ変数に値を代入する

int main(){
    cout << MyClass::num << endl; // staticなメンバ変数にアクセスする

    return 0;
}