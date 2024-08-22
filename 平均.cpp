#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    double average;

    cout << "請輸入10個數字：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        sum += num;
    }
    average = (double)sum / 10;
    cout << "這10個數字的平均值為：" << average << endl;

    return 0;
}
