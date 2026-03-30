#include <iostream>
using namespace std;

// getterとsetterについて
// データを隠すためにprivateにした変数を、外部からアクセスできるようにするための関数
// オブジェクト指向ではメンバ変数はprivateにすることが多いので、getterとsetterはよく使われる

// 値の範囲の設定
class  Student{
    private:
        int num;
    public:
        void setNum(int n); // setterは値を設定するための関数
        int getNum(); // getterは値を取得するための関数
};

void Student::setNum(int n){
    // 範囲外の値が設定されないようにするための条件を追加
    if (n > 0 && n < 100){
        num = n;
    }else{
        num = 0; // 範囲外の値が設定された場合は0にする
    }
}

int Student::getNum(){
    return num;
}

int main(){
    Student s;
    s.setNum(120); // setterを使って値を設定

    cout << s.getNum() << endl; // getterを使って値を取得
    return 0;

}