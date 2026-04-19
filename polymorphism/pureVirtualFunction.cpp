#include <iostream>
using namespace std;

// 基底関数
// オーバーライド前提の場合は、仮想関数として定義してあげたほうが楽
class OldClass{
    public:
    virtual void hello() = 0; // 処理の内容を決めずに、純粋仮想関数として定義してあげる必要がある。
};

class Dog : public OldClass{
    public:
    void hello(){
        cout << "ワンワン" << endl;
    }
};

class Cat : public OldClass{
    public:
    void hello(){
        cout << "ニャー" << endl;
    }
};

int main(){
    OldClass *p[2];
    p[0] = new Dog();
    p[1] = new Cat();

    for(int i = 0;i < 2;i++){
        p[i]->hello();
    }
    return 0;
}