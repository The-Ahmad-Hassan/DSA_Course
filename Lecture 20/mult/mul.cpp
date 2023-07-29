#include<iostream>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == 0) {
        return 0;
    }

    int result = 0;
    unsigned long long divid = abs(dividend);
    unsigned long long divi = abs(divisor);

    while (divi <= divid) {
        result = result + 1;
        divid = divid - divi;
    }

    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        result = -result;
    }

    return result;
}

int main() {
    int div = divide(7, -3);
    cout << div;

    return 0;
}
