#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

// 定義拉霸機上的三個圖案
const char SYMBOLS[] = {'A', 'B', 'C'};

// 產生亂數，用於生成隨機圖案
int random(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// 產生隨機圖案
char spin() {
    int index = random(0, 2);
    return SYMBOLS[index];
}

int main() {
    // 初始化亂數種子
    srand(time(NULL));

    // 顯示遊戲介面
    cout << "**********" << endl;
    cout << "* SLOT *   * MACHINE *" << endl;
    cout << "**********" << endl;

    // 開始遊戲
    char a, b, c;
    char input;

    do {
        cout << "Press Enter to spin the slot machine!" << endl;
        cin.ignore(); // 忽略之前輸入的 Enter

        // 產生隨機圖案
        a = spin();
        b = spin();
        c = spin();

        // 顯示拉霸機圖案
        cout << a << " | " << b << " | " << c << endl;

        // 停頓 1 秒
		Sleep(1000);

    } while (a != b || b != c);

    // 顯示中獎信息
    cout << "Congratulations! You win!" << endl;

    return 0;
}

