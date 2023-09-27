#include <bits/stdc++.h>

using namespace std;

int main() {
    int heads, legs;
    cout << "Nhap so dau va so chan: ";
    cin >> heads >> legs;

    int chickens = 0, dogs = 0;
    for (int i = 0; i <= heads; i++) {
        int j = heads - i;
        if (2 * i + 4 * j == legs) {
            chickens = i;
            dogs = j;
            break;
        }
    }

    if (chickens == 0 && dogs == 0) {
        cout << "Khong tim thay gia tri hop le." << endl;
    } else {
        cout << "So ga: " << chickens << endl;
        cout << "So cho: " << dogs << endl;
    }

    return 0;
}
