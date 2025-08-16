#include <iostream>
#include <string>
using namespace std;

int main() {
    string cardHolder, otpInput, otpCode = "123456", status;
    double amount, balance;

    cout << "=== Full Payment Transaction ===\n";
    cout << "Cardholder Name: "; cin >> cardHolder;
    cout << "Transaction Amount: $"; cin >> amount;
    cout << "Available Balance: $"; cin >> balance;

    // Authorization
    if (amount <= balance) {
        status = "Approved";
    } else {
        status = "Declined";
    }
    cout << "Authorization Status: " << status << endl;
    if (status != "Approved") return 0;

    // Authentication
    cout << "Enter OTP for 3D Secure: "; cin >> otpInput;
    if (otpInput != otpCode) {
        cout << "Authentication Failed ❌\n";
        return 0;
    }
    cout << "Authentication Success ✅\n";

    // Settlement
    cout << "Transferring $" << amount << " to Merchant...\n";
    cout << "Payment Completed ✅\n";

    return 0;
}
