#include <iostream>
using namespace std;

int main(){
    int num = 2;

    num = num & ~(1 << 1);

    cout << num << endl;
    return 0;
}