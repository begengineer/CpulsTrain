#include <iostream>
using namespace std;

// 共通の着てクラスがある場合はvirtualをつける
// 既定の人間クラス
class Human{
    public:
    void show();
};

void Human::show(){
    cout << "human" << endl;
}

// 母親クラス
class Mother : virtual public Human{};

// 父親クラス
class Father : virtual public Human{};

// 子供クラス
class Child : public Mother, public Father{};
int main(){
    Child c;
    c.show();

    return 0;
}