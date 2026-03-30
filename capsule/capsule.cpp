#include <iostream>
using namespace std;

// カプセル化について
// 内部の仕組みを理解しなくても機能を使用できる

class Student {
    public: // ユーザーが使用できる機能を提供
     void setNum(int n);
     void printNmu();
    private: // データを隠す(クラス内だけでしか値の操作ができない)
     int num;
};

void Student::setNum(int n){
    num = n;
}

void Student::printNmu(){
    cout << num << endl;
}

int main(){
    Student s;
    s.setNum(10);

    s.printNmu();
    return 0;
}