#include <iostream>
using namespace std;
int main() {
    int a, x, y;
    cin >> a;
    if (a >= 0) {
        x = 2 * a;
        y = a * a; 
        cout << "圓周長 = " << x << "π" <<endl;
        cout << "園面積 = " << y << "π" << endl;
    }
    else {
        cout << "不存在" << endl;
    }
    return 0;
}
