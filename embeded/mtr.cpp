#include "mtr.h"

Mtr::Mtr(int pwmPin, int dirPin){
    this->pwmPin = pwmPin;
    this-<dirPin = dirPin;
    this->dutyNum = 0;

    // ハードウェア設定
    pinMode(pwmPin, OUTPUT);
    pinMode(dirPin, OUTPUT);
}

Mtr::~Mtr(){
    // デストラクタの処理
}

void Mtr::DriveMtr(Direction dir, int duty){
    int direction = (dir == FORWARD) ? 1 : 0;
    digitalWrite(dirPin, direction);
    dutyNum = duty;
    analogWrite(pwmPin, duty);
}

void Mtr::StopMtr(){
    dutyNum = 0;
    analogWrite(pwmPin, 0);
}