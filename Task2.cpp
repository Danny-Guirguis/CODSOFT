#include <iostream>
using namespace std;

void calculate(long double num1, long double num2);

int main(){

    long double num1,num2;

    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;

    calculate(num1,num2);

    return 0;
}

void calculate(long double num1, long double num2){

    cout << "\nChoose an operation to perform\n";
    cout << "1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\n";

    int operation;
    cin >> operation;

    switch (operation) {
        case 1:
            cout << "\nThe addition of the two numbers equals: " << (num1 + num2) << "\n";
            cout << "Do you want to calculate another two numbers?\n" << "1 = Yes\n2 = No";
            break;
        case 2:
            cout << "\nThe subtraction of the two numbers equals: ";
            cout << (num1 - num2) << "\n";
            break;
        case 3:
            cout << "\nThe multiplication of the two numbers equals: ";
            cout << (num1 * num2) << "\n";
            break;
        case 4:
            cout << "\nThe division of the two numbers equals: ";
            cout << (num1 / num2) << "\n";
            break;
        default:
            cout << "\nInvalid operation, Please choose a valid operation\n";
            return calculate(num1,num2);
    }
}
