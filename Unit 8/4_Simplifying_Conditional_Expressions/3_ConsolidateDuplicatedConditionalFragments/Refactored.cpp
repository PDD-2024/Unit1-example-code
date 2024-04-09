#include <iostream>

void processOrder(int quantity, bool isUrgent) {
    double pricePerUnit = 10.0;
    double totalPrice = quantity * pricePerUnit;

    // Apply urgency surcharge
    if (isUrgent) {
        totalPrice *= 1.2; // Apply 20% urgency surcharge
    }

    // Apply bulk order discount
    if (quantity > 100) {
        totalPrice *= 0.9; // Apply 10% discount for bulk orders
    }

    std::cout << "Total Price: $" << totalPrice << std::endl;
}

int main() {
    // Example order
    processOrder(120, true); // 120 units, urgent order

    return 0;
}
