#include <iostream>
using namespace std;

int main() {
    cout << "The integer roots for given problem are:" << endl;


    for (int a = -10; a <= 10; a = a + 1) {
        for (int b = -10; b <= 10; b = b + 1) {
            for (int c = -10; c <= 10; c = c + 1) {

                if (3 * a + 7 * b - 5 * c == 10) {
                    cout << "Solution: a = " << a
                         << "  b = " << b
                         << "  c = " << c << endl;
                }
            }
        }
    }

    return 0;
}
