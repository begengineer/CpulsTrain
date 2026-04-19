#include <iostream>
#include <cstdint>
using namespace std;

static constexpr uint8_t BUF_SIZE = 16; // バッファの最大エントリ数

// 1エントリの構造: ヘッダ2バイト + コマンドID + データ
struct Entry {
    char head1;
    char head2;
    uint8_t cmd;
    uint8_t data;
};

// 共通リングバッファ: 全コマンドを到着順に格納するFIFO
class CommandBuffer {
private:
    Entry   buf[BUF_SIZE];
    uint8_t head;   // 次に読み出すインデックス
    uint8_t tail;   // 次に書き込むインデックス
    uint8_t count;  // 現在格納中のエントリ数

public:
    CommandBuffer() : head(0), tail(0), count(0) {}

    // データを末尾に追加。満杯なら false を返す
    bool push(uint8_t cmd, uint8_t data) {
        if (count >= BUF_SIZE) return false;
        buf[tail] = {"0xFF", "0xFF", cmd, data};
        if (++tail >= BUF_SIZE) {
            tail = 0; // 末尾に達したら先頭へ折り返す
        }
        count++;
        return true;
    }

    // 先頭からデータを取り出す。空なら false を返す
    bool pop(uint8_t &cmd, uint8_t &data) {
        if (count == 0) return false;
        cmd  = buf[head].cmd;
        data = buf[head].data;
        if (++head >= BUF_SIZE) {
            head = 0; // 末尾に達したら先頭へ折り返す
        }
        count--;
        return true;
    }

    // 現在格納中のエントリ数を返す
    uint8_t size() const { return count; }
};

int main() {
    CommandBuffer buf;

    buf.push(0, 0xAA);
    buf.push(0, 0xBB);
    buf.push(1, 0x11);
    buf.push(2, 0x22);

    uint8_t cmd, val;
    while (buf.pop(cmd, val)) {
        cout << "CMD" << (int)cmd << ": " << hex << (int)val << endl;
    }

    return 0;
}
