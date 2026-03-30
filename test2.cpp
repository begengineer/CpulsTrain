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

// プロトタイプ宣言
void change(Student *s);

// メイン関数
int main(){
    Student tanaka; // Studentクラスのオブジェクトs1を作成
    tanaka.num = 12345; // 学籍番号を設定
    tanaka.year = 2; // 学年を設定

    Student *ptr = &tanaka;
    ptr->show(); // ポインタを使ってshow関数を呼び出す

    change(ptr); // ポインタを使ってchange関数を呼び出す

    (*ptr).show(); // 変更後の内容を表示

    return 0;
}

void change(Student *s){
    s->num = 54321; // 学籍番号を変更
    s->year = 3; // 学年を変更
}