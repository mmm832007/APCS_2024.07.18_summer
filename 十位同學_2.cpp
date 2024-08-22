#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int numStudents = 10;
    int scores[numStudents];

    cout << "請輸入10名學生的成績：" << endl;
    for (int i = 0; i < numStudents; i++) {
        cin >> scores[i];
    }

    sort(scores, scores + numStudents, greater<int>());

    cout << "排序後的成績（從高到低）：" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
