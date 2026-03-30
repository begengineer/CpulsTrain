#include <iostream>
using namespace std;

// 継承について
// 既存のクラスを基にして新しいクラスを作成することができる機能
// 基底クラス:継承されるクラス

// 生徒クラスを作成
// 基本クラス
class Student{
    protected: // 派生クラスからアクセスできるようにするためにprotectedを使用
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
        void setNum2(int n){
            num1 = n;
        }
};

int main(){
    Teacher t;
    t.setNum2(10);

    return 0;
}