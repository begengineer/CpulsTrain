#include <iostream>
using namespace std;

// テンプレートとは:関数の引数の型を、関数の呼び出し時に決めることができる機能

template <class T>
T nibai(T x){
    x *= 2;
    return x;
} 

template <class T1, class T2>
void comp(T1 x,T2 y){
    if(x > y){
        cout << x << endl;
    }else{
        cout << y << endl;
    }
}

// クラスのテンプレート
template <class T>
class Sankaku{
    public:
        T teihen;
        T takasa;
        Sankaku(T x,T y){
            teihen = x;
            takasa = y;
        }
        T keisan(){
            return teihen * takasa / 2;
        }
};

int main(){
    cout << nibai(10) << endl; // int型の引数を渡す
    cout << nibai(3.14) << endl; // double型の引数を渡す

    comp(10, 20); // int型の引数を渡す
    comp(3.14, 2.71); // double型の引数を渡す

    // クラスのテンプレートの使用例
    Sankaku<int> x(10,20);
    Sankaku<double> y(3.14,2.71);

    cout << x.keisan() << endl;
    cout << y.keisan() << endl;

    return 0;
}