#include <iostream>
using namespace std;

class Calculator {
private:
    int currentValue;

public:
    Calculator() {
        currentValue = 0;
    }

    Calculator(int val) {
        currentValue = val;
    }

    int getValue() {
        return currentValue;
    }

    void setValue(int val) {
        currentValue = val;
    }

    void add(int value) {
        currentValue += value;
    }

    void subtract(int value) {
        currentValue -= value;
    }

    void multiply(int value) {
        currentValue *= value;
    }

    void divideBy(int value) {
        if (value != 0) {
            currentValue /= value;
        } else {
            cout << "Error: Cannot divide by zero." << endl;
        }
    }

    void clear() {
        currentValue = 0;
    }

    void display() {
        cout << "Current Value: " << currentValue << endl;
    }

    ~Calculator() {
        // Destructor
    }
};

int main() {
    Calculator calc1; // Using the default constructor
    Calculator calc2(10); // Using the overloaded constructor

    calc1.add(5);
    calc1.subtract(2);
    calc1.multiply(3);
    calc1.divideBy(2);

    calc2.add(7);
    calc2.multiply(2);

    calc1.display();
    calc2.display();

    return 0;
}

