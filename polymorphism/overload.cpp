#include <iostream>
using namespace std;

//　多態性について：同じ関数名で引数の型や数が異なる関数を定義することができる機能
// オーバーロードについて：同じ関数名で引数の型や数が異なる関数を定義することができる機能
class NewClass{
    public:
    void hello();
    void hello(string name);
};

void NewClass::hello(){
    cout << "Hello, World!" << endl;
}

void NewClass::hello(string name){
    cout << "Hello, " << name << endl;
}


int main(){
    NewClass nc;
    nc.hello();
    nc.hello("John");

    return 0;
}