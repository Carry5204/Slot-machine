#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

// �w�q���Q���W���T�ӹϮ�
const char SYMBOLS[] = {'A', 'B', 'C'};

// ���ͶüơA�Ω�ͦ��H���Ϯ�
int random(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// �����H���Ϯ�
char spin() {
    int index = random(0, 2);
    return SYMBOLS[index];
}

int main() {
    // ��l�ƶüƺؤl
    srand(time(NULL));

    // ��ܹC������
    cout << "**********" << endl;
    cout << "* SLOT *   * MACHINE *" << endl;
    cout << "**********" << endl;

    // �}�l�C��
    char a, b, c;
    char input;

    do {
        cout << "Press Enter to spin the slot machine!" << endl;
        cin.ignore(); // �������e��J�� Enter

        // �����H���Ϯ�
        a = spin();
        b = spin();
        c = spin();

        // ��ܩ��Q���Ϯ�
        cout << a << " | " << b << " | " << c << endl;

        // ���y 1 ��
		Sleep(1000);

    } while (a != b || b != c);

    // ��ܤ����H��
    cout << "Congratulations! You win!" << endl;

    return 0;
}

