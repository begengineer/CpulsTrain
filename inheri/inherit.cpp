#include <iostream>
using namespace std;

// 継承について
// 既存のクラスを基にして新しいクラスを作成することができる機能
// 基底クラス:継承されるクラス

// 生徒クラスを作成
// 基本クラス
class Student{
    public:
        int num1;
        void show();
};

void Student::show(){
    cout << "num1: " << num1 << endl;
}

// 注意：付け足せるけど減らせない
// 派生クラス:基底クラスを継承して作成されたクラス
class Teacher : public Student{ //　ここでStudentクラスを継承している
    public:
        int num2;
};

int main(){
    Teacher t;
    t.num1 = 10; // Studentクラスのnum1をTeacherクラスで使用できる
    t.num2 = 20; // Teacherクラスのnum2を使用できる
    cout << "num2: " << t.num2 << endl; // Studentクラスのnum1をTeacherクラスで使用できる
    t.show(); // Studentクラスのshow関数をTeacherクラスで使用でき
}