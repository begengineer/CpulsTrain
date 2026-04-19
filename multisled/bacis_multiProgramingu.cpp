#include <iostream>
#include <future>
#include <thread>

int heavy_calculation(int a, int b) {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // 重い処理のシミュレーション
    return a + b;
}

int main() {
    // 1. 非同期で計算を開始 (Futureを受け取る)
    std::future<int> result_future = std::async(std::launch::async, heavy_calculation, 10, 20);

    std::cout << "計算中... 他の作業を進めます。" << std::endl;

    // 2. 計算を待っている間に別の処理ができる
    for(int i = 0; i < 5; ++i) {
        std::cout << "." << std::flush;
        std::cout << "タップ" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    // 3. 結果が必要なタイミングで取得 (まだ終わっていなければここで待機する)
    int final_result = result_future.get(); 
    
    std::cout << "\n結果: " << final_result << std::endl;
    return 0;
}