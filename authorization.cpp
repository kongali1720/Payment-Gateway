#include <iostream>
#include <string>
using namespace std;

int main() {
    string cardHolder, status;
    double amount, balance;

    cout << "=== Authorization Simulation ===\n";
    cout << "Cardholder Name: "; cin >> cardHolder;
    cout << "Transaction Amount: $"; cin >> amount;
    cout << "Available Balance: $"; cin >> balance;

    if (amount <= balance) {
        status = "Approved";
    } else {
        status = "Declined";
    }

    cout << "Authorization Status: " << status << endl;
    return 0;
}
