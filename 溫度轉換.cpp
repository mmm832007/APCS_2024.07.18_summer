#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "請輸入攝氏溫度: ";
    cin >> celsius;

    // 攝氏轉華氏公式：華氏 = 攝氏 * 9/5 + 32
    fahrenheit = celsius * 9 / 5 + 32;

    cout << celsius << " 攝氏度相當於 " << fahrenheit << " 華氏度" << endl;

    return 0;
}
