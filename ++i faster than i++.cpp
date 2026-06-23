
#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 5;

    // prefix  → increment FIRST, then use
    int x = ++a;
    cout << "++a : a = " << a << ", x = " << x << endl;
    // output: a = 6, x = 6

    // postfix → use FIRST, then increment
    int y = b++;
    cout << "b++ : b = " << b << ", y = " << y << endl;
    // output: b = 6, y = 5  ← y gets OLD value!

    cout << endl;

    // in a loop — both give same result
    // but ++i is slightly faster (no temp copy)
    cout << "Using ++i : ";
    for (int i = 0; i < 5; ++i) {
        cout << i << " ";
    }

    cout << endl;
    cout << "Using i++ : ";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }

    return 0;
}
