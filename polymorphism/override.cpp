#include <iostream>
using namespace std;

class OldClass{
    public:
    virtual void hello(){ // 仮想関数として定義してあげる必要がある。
        cout << "自己紹介をしてください" << endl;
    }
};

class Tanaka : public OldClass{
    public:
    void hello(){
        cout << "田中です。" << endl;
    }
};

class Sato : public OldClass{
    public:
    void hello(){
        cout << "佐藤です。" << endl;
    }
};


int main(){
    Sato sato;
    sato.hello();

    return 0;
}