#include <iostream>
#include <string>
using namespace std;

int main() {
    string otpInput, otpCode = "123456";

    cout << "=== 3D Secure Authentication ===\n";
    cout << "Enter OTP sent to your phone: "; cin >> otpInput;

    if (otpInput == otpCode) {
        cout << "Authentication Success ✅\n";
    } else {
        cout << "Authentication Failed ❌\n";
    }
    return 0;
}
