#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
void my_memcpy(char* dest, const char* src, int n);
void memcpy(char* dest, const char* src, int n);

#define BUF_SIZE 16

int main()
{
    // 変数定義
    char buf1[BUF_SIZE];
    char buf2[BUF_SIZE];

    // 変数初期化
    memset(buf1, '\0', BUF_SIZE);
    memset(buf2, '\0', BUF_SIZE);

    // メモリ領域を特定の文字で埋める
    memset(buf1, 'b', 4);  // buf1の最初の4バイトをbにする
    memset(buf1, 'a', 2);  // buf1の最初の2バイトをaにする

    // 配列の内容を表示
    printf("配列の要素を表示(コピー前)。\n");
    printf("buf1:%s\n", buf1);
    printf("buf2:%s\n", buf2);

    // メモリをコピーする
    my_memcpy(buf2, buf1, 3);  // buf1の先頭3バイトをbuf2にコピーする

    // 配列の内容を表示
    printf("配列の要素を表示(コピー後)。\n");
    printf("buf1:%s\n", buf1);
    printf("buf2:%s\n", buf2);

    return 0;
}
void my_memcpy(char* dest, const char* src, int n){
    for(int i = 0; i <= n; i++){
        dest[i] = src[i];
    }
}
