#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    bool marketingOptIn;
    double heightCm;
    double weightKg;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);

    std::cout << "Enter your email: ";
    std::getline(std::cin, email);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Opt-in for marketing? (true/false): ";
    std::cin >> std::boolalpha >> marketingOptIn;

    std::cout << "Enter your height in cm: ";
    std::cin >> heightCm;

    std::cout << "Enter your weight in kg: ";
    std::cin >> weightKg;

    std::cout << "\nProfile Summary:\n";
    std::cout << "Name: " << firstName << ' ' << lastName << '\n';
    std::cout << "Email: " << email << '\n';
    std::cout << "Age: " << age << '\n';
    std::cout << "Marketing Opt-in: " << std::boolalpha << marketingOptIn << '\n';
    std::cout << "Height: " << heightCm << " cm\n";
    std::cout << "Weight: " << weightKg << " kg\n";

    return 0;
}
