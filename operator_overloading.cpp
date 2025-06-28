#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex number
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the '+' operator
    Complex operator+(const Complex& other) {
        // Add real and imaginary parts separately
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the assignment operator
    Complex& operator=(const Complex& other) {
        if (this != &other) {  // Check for self-assignment
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }

    // A method to print the complex number
    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);  // 3 + 4i
    Complex c2(1.0, 2.0);  // 1 + 2i

    // Using the overloaded '+' operator to add complex numbers
    Complex c3 = c1 + c2;  // This calls operator+() and returns result object (overloaded assignment operator is not used here)

    // Display the result
    c3.display();  // Output: 4 + 6i

    Complex c4 = c1;  // Use overloaded assignment operator
    std::cout << "\nAfter assignment (c4 = c1):" << std::endl;
    std::cout << "c4 = "; 
    c1.display();

    return 0;
}
