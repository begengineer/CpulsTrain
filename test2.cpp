#include <iostream>
using namespace std;

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
    int i;
    Student array[3]; // Studentクラスの配列を宣言
    for(i = 0; i < 3; i++){
        cout << "学生" << i + 1 << "の学籍番号を入力してください: ";
        cin >> array[i].num; // 学籍番号を入力
        cout << "学生" << i + 1 << "の学年を入力してください: ";
        cin >> array[i].year; // 学年を入力
    }
    for(i = 0; i < 3; i++){
        array[i].show();
    }
    cout << endl;
    
    return 0;
}