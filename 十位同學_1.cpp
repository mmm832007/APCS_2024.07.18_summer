#include <iostream>

using namespace std;

int main() {
    const int numStudents = 10;
    int scores[numStudents];
    int maxScore, minScore, sum = 0;
    double average;

    cout << "請輸入10名學生的成績：" << endl;
    for (int i = 0; i < numStudents; i++) {
        cin >> scores[i];
        if (i == 0) {
            maxScore = minScore = scores[i];
        } else {
            if (scores[i] > maxScore) {
                maxScore = scores[i];
            }
            if (scores[i] < minScore) {
                minScore = scores[i];
            }
        }
        sum += scores[i];
    }

    average = (double)sum / numStudents;

    cout << "最高分為：" << maxScore << endl;
    cout << "最低分為：" << minScore << endl;
    cout << "平均分為：" << average << endl;

    return 0;
}
