#pragma once

class Student{
    private:
        int num; // 学籍番号
        int year; // 学年

    public:
        // コンストラクタ（初期化用）
        Student(int n, int y);
        void show(); // 学籍番号と学年を表示する関数
};