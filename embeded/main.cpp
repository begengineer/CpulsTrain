#include <iostream>
using namespace std;
#include "mtr.h"

int main(){
    Mtr mtr(9,8);
    mtr.DriveMtr(FORWARD, 128);
    delay(2000);
    mtr.StopMtr();
    delay(2000);
    return 0;
}