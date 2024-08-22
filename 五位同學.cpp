#include <iostream>

using namespace std;

int main() {
    const int numStudents = 5;
    double scores[numStudents]; 
    double sum = 0.0, average;
    cout << "請輸入5個學生的成績：" << endl;
    for (int i = 0; i < numStudents; i++) {
        cin >> scores[i];
        sum += scores[i]; 
    }
    average = sum / numStudents;
    cout << "5個學生的平均成績為：" << average << endl;
    return 0;
}
