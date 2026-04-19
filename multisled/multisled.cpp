#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
using namespace std;

int counter = 0;
mutex mtx; // 排他処理のためのミューテックス

void incrementCounter() {
    for (int i = 0; i < 100000; i++) {
        lock_guard<mutex> lock(mtx); // ミューテックスをロック
        counter++; // クリティカルセクション
    }
}

int main(){
    vector<thread> threads;

    // 複数のスレッドの作成
    for(int i = 0; i < 10; i++){
        threads.push_back(thread(incrementCounter));
    }

    for(auto& t:threads){
        t.join(); // スレッドの終了を待つ
    }

    // 結果の表示
    cout << "Counter: " << counter << endl; // 期待される結果は1000000
    return 0;
}