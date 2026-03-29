#include <iostream>
using namespace std;

// 構造体定義
typedef struct {
    int num;
    int year;
    char name[128];
}Student;

// メイン関数
int main(){
    Student s1 = {1, 2024, "Alice"};
    Student s2 = {2, 2023, "Bob"};

    cout << "Student 1: " << s1.num << ", " << s1.year << ", " << s1.name << endl;
    cout << "Student 2: " << s2.num << ", " << s2.year << ", " << s2.name << endl;

    return 0;
}