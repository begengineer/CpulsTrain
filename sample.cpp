#include <iostream>
#include "sample.h"
using namespace std;

// コンストラクタの実装（メンバ初期化子リストを使用）
Student::Student(int n, int y) : num(n), year(y) {
}

void Student::show(){
    cout << "学籍番号: " << num << endl;
    cout << "学年: " << year << endl;
}
