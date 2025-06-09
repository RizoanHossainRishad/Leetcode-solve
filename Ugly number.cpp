#include <iostream>
//#include <limits.h>

using namespace std;

bool isDivisibleByFactors(int n) {
    if (n <= 0) return false;  // Reject negative numbers and zero
    //negative numbers aren't technically considered in problems like determining divisibility by 2, 3, or 5.
    while (n > 1) {
        if (n % 5 == 0) {
            n /= 5;
        } else if (n % 3 == 0) {
            n /= 3;
        } else if (n % 2 == 0) {
            n /= 2;
        } else {
            return false;
        }
    }
    return true;  // Successfully reduced to 1
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isDivisibleByFactors(n) ? "true" : "false") << endl;

    return 0;
}
