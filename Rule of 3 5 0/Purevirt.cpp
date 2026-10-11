// Pure virtual functions and abstract classes
//
// A pure virtual function is declared with "= 0".
// It defines a compulsory interface for derived classes, but it does not
// provide an implementation in the base class.
//
// A class with at least one pure virtual function is an abstract class.
// An abstract class is used as a design/interface class:
//   - its object cannot be created directly;
//   - its pointer or reference can be used;
//   - derived classes must override all pure virtual functions.
//
// Use this design when every derived type must provide its own behavior,
// such as different payment methods, shapes, notifications, or vehicles.

#include <iostream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class Payment {
public:
    // Pure virtual function: every payment method must implement pay().
    virtual void pay(double amount) const = 0;

    // Another pure virtual function: every payment method must identify itself.
    virtual string paymentType() const = 0;

    // A polymorphic base class should have a virtual destructor.
    // This ensures correct cleanup when a derived object is destroyed through
    // a Payment pointer.
    virtual ~Payment() = default;
};

class UpiPayment : public Payment {
public:
    // override confirms that this function implements Payment::pay().
    void pay(double amount) const override {
        cout << "Paid Rs. " << amount << " using UPI." << endl;
    }

    string paymentType() const override {
        return "UPI";
    }
};

class CardPayment : public Payment {
public:
    void pay(double amount) const override {
        cout << "Paid Rs. " << amount << " using card." << endl;
    }

    string paymentType() const override {
        return "Card";
    }
};

void processPayment(const Payment& payment, double amount) {
    cout << "Payment method: " << payment.paymentType() << endl;
    payment.pay(amount);
}

int main() {
    // Payment payment; // Error: Payment is an abstract class.

    UpiPayment upi;
    CardPayment card;

    // A reference to the abstract base class allows runtime polymorphism.
    // The correct derived implementation is selected at runtime.
    processPayment(upi, 500.0);
    processPayment(card, 1200.0);

    // Smart pointers allow different derived payment objects to be stored
    // together while RAII automatically manages their lifetimes.
    vector<unique_ptr<Payment>> payments;
    payments.push_back(make_unique<UpiPayment>());
    payments.push_back(make_unique<CardPayment>());

    cout << "\nPayments through base-class pointers:" << endl;

    for (const unique_ptr<Payment>& payment : payments) {
        payment->pay(750.0);
    }

    return 0;
}