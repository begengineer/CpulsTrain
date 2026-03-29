#include <iostream>
#include "sample.h"
using namespace std;

void Student::show(){
    cout << "学籍番号: " << num << endl;
    cout << "学年: " << year << endl;
}

int main(){
    Student Tanaka;
    Tanaka.num = 12345;
    Tanaka.year = 2;
    Tanaka.show();

    return 0;
}
