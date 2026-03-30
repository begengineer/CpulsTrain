#include <iostream>
using namespace std;

class OldClass{
    public:
    virtual void introduce(){ // 仮想関数として定義してあげる必要がある。
        cout << "old class" << endl;
    }
};

class NewClass : public OldClass{
    public:
    void introduce(){
        cout << "new class" << endl;
    }
};

int main(){
    NewClass oc;
    oc.introduce(); // old class

    // 継承元の関数を呼び出すこともできる。
    oc.OldClass::introduce(); // new class

    return 0;
}