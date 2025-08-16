#include <iostream>
#include <string>
using namespace std;

int main() {
    string merchant = "ABC Store";
    double amount;

    cout << "=== Settlement Simulation ===\n";
    cout << "Transaction Amount: $"; cin >> amount;

    cout << "Transferring $" << amount << " to " << merchant << "...\n";
    cout << "Settlement Completed ✅\n";

    return 0;
}
