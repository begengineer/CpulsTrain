#include <iostream>
#include <future>
#include <thread> // sleep_for を使うために必要
#include <chrono> // 時間の単位を指定するために必要

int main() {
    std::cout << "メイン処理：開始します。" << std::endl;

    // 1. std::async で「3秒かかる処理」を裏で開始
    std::future<int> f = std::async(std::launch::async, [](){
        for(int i = 0; i < 3; ++i) {
            // 1秒待機
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::cout << "\n  [裏側] 重い処理を頑張っています... (" << i+1 << "秒経過)" << std::endl;
        }
        return 100 + 200;
    });

    // 2. メインスレッドで数字を表示
    for(int i = 0; i < 50; i++){
        std::cout << i << " " << std::flush; // flushで即座に出力
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 少しゆっくり表示
    }
    
    std::cout << "\nメイン処理：for文が完了しました。結果を回収します。" << std::endl;

    // 3. 結果を受け取る
    // もし裏側の処理が終わっていなければ、ここで終わるまで待機します
    int result = f.get(); 
    std::cout << "最終結果: " << result << std::endl;

    return 0;
}