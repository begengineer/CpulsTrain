#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}