#include <iostream>
using namespace std;

// 多重継承
class Mother{
    public:
    int num1;
};

class Father{
    public:
    int num2;
};

class Child : public Mother, public Father{};

int main(){
    Child c;
    c.num1 = 10;
    c.num2 = 20;
    cout << "num1: " << c.num1 << endl;
    cout << "num2: " << c.num2 << endl;

    return 0;
}