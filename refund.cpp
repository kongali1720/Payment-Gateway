#include <iostream>
#include <string>
using namespace std;

int main() {
    string cardHolder;
    double refundAmount;

    cout << "=== Refund Simulation ===\n";
    cout << "Cardholder Name: "; cin >> cardHolder;
    cout << "Refund Amount: $"; cin >> refundAmount;

    cout << "Refund of $" << refundAmount << " sent to " << cardHolder << " ✅\n";

    return 0;
}
