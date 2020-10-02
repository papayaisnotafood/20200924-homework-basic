#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "請輸入高度： ";
    cin >> height;
    for (int i = 0; i <= height; i++) {
        for (int j = height - i; j >= i; j--) {
        cout << " ";
        }
        for (int k = 1; k < i + 1; k++) {
        cout << "#";
        }
    cout << '\n';
    }
}
