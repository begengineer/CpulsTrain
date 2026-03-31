#ifndef MTR_H
#define MTR_H

enum Direction { FORWARD, BACKWARD };

class MTR {
    public:
        MTR(int pwnPin, int dirPin);
        ~MTR();
        void DriveMtr(Direction dir, int duty);
        void StopMtr();
    private:
        int pwnPin;
        int dirPin;
        int dutyNum;
}

#endif // MTR_H