#include <iostream>
using namespace std;

// 抽象クラスとポインタ

class Student{
    public:
     int num;
};

class Tanaka : public Student{
    public:
    Tanaka(int x){
        num = x;
    };
};

class Sato : public Student{
    public:
    Sato(int x){
        num = x;
    };
};

int main(){
    // 実体の宣言
    Tanaka tanaka(10);
    Sato sato(20);

    // 基底クラスから派生クラスにアクセスができる
    Student *p[2];
    p[0] = &tanaka; // 基底クラスのポインタに派生クラスのアドレスを代入
    p[1] = &sato; // 基底クラスのポインタに派生クラスのアドレスを代入

    for(int i = 0;i < 2;i++){
        cout << (*p[i]).num << endl;
    }

    return 0;
}