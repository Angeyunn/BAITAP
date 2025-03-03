#include <iostream>
#include <iomanip>

double calculate(double num1, char operat, double num2) {
    double result;
    switch (operat) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cerr << "Error: Division by zero" << std::endl;
                return 0;
            }
            break;
        default:
            std::cerr << "Error: Invalid operator" << std::endl;
            return 0;
    }
    return result;
}

int main() {
    double num1, num2;
    char operat;
    std::cin >> num1>> operat>> num2;

    double result = calculate(num1, operat, num2);
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;

    return 0;
}
