#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {8, 6, 5, 4, 1};

    cout << "原始陣列：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    cout << "逆序後的陣列：";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
