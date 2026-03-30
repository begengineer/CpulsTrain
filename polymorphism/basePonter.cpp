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

    Student *p[2];
    p[0] = &tanaka;
    p[1] = &sato;

    for(int i = 0;i < 2;i++){
        cout << (*p[i]).num << endl;
    }

    return 0;
}