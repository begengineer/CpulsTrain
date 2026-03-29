#include <iostream>
using namespace std;

// オブジェクトとポインタ

class Student {
    public:
        int num; // 学籍番号
        int year; // 学年
        void show(); // 学籍番号と学年を表示する関数
};

void Student::show(){
    cout << "学籍番号: " << num << endl;
    cout << "学年: " << year << endl;
}

// メイン関数
int main(){
    Student tanaka; // Studentクラスのオブジェクトs1を作成
    tanaka.num = 12345; // 学籍番号を設定
    tanaka.year = 2; // 学年を設定

    Student *ptr = &tanaka;
    ptr->show(); // ポインタを使ってshow関数を呼び出す

    return 0;
}