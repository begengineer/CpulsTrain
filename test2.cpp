#include <iostream>
using namespace std;

struct Fruits{
    char name[128];
    int price;
    int zaiko;
};

// メイン関数
int main(){
    // ポインタについて
    int a = 10;
    int *b = &a; // aのアドレスをbに格納
    *b = 11; // bが指すアドレスの値を11に変更
    cout << "Value of a: " << a << "\n"; // aの値
    printf("%p\n", b); // aのアドレス

    // ポインタと構造体
    struct  Fruits store = {"Apple", 100, 50};
    struct Fruits *p = &store; // storeのアドレスをpに格納
    cout << "Fruit name: " << (*p).name << "\n"; // ポインタを使用して構造体のメンバにアクセス(データ型を同じにする必要がある)


}