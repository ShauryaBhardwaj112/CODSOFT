#include <iostream>
using namespace std;

int main() {
    long double Num1, Num2;
    char choice;
    cout << "\nEnter the first Number of Your Choice (including Decimals): ";
    cin >> Num1;
   
    cout << "Enter the second Number of your choice (including Decimals): ";
    cin >> Num2;
    cout << "\nEnter the operation you want to perform:\n";
    cout << "Press 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division: ";
    cin >> choice;

    switch(choice) {
    case '1':
        cout << "You have opted for ADDITION and the result is: " << Num1 + Num2 << endl;
        break;
    case '2':
        cout << "You have opted for SUBTRACTION and the result is: " << Num1 - Num2 << endl;
        break;
    case '3':
        cout << "You have opted for MULTIPLICATION and the result is: " << Num1 * Num2 << endl;
        break;
    case '4':
        if (Num2 != 0) {
            cout << "You have opted for DIVISION and the result is: " << Num1 / Num2 << endl;
        } else {
            cout << "Result could not be calculated as Num2 = " << Num2 << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation!" << endl;
        break;
    }

    return 0;
}
