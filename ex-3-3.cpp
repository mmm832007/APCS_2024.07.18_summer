#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "請輸入年份：";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " 年是閏年" << endl;
    } 
    else {
        cout << year << " 年是平年" << endl;
    }

    return 0;
}
