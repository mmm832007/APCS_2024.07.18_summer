#include <iostream>

using namespace std;

int main() {
    int num, positiveCount = 0, negativeCount = 0, zeroCount = 0;

    cout << "請輸入10個整數：" << endl;

    // 輸入10個數字並統計
    for (int i = 0; i < 10; i++) {
        cin >> num;

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // 輸出結果
    cout << "正數有 " << positiveCount << " 個" << endl;
    cout << "負數有 " << negativeCount << " 個" << endl;
    cout << "零有 " << zeroCount << " 個" << endl;

    return 0;
}
