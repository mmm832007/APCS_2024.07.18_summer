#include <iostream>

using namespace std;

double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double height, width;
    cout << "請輸入矩形的高: ";
    cin >> height;
    cout << "請輸入矩形的寬: ";
    cin >> width;
    double area = calculateArea(height, width);
    cout << "矩形的面積為: " << area << endl;

    return 0;
}
