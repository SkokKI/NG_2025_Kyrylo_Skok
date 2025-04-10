#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double first_num;
    double second_num;
    int operation;
    cout << "Input your first number for calculating" << endl;
    cin >> first_num;
    cout << "Which operation you want?\n1.+\n2.-\n3.*\n4./\n5.Rise to the power\n6.Square root\n";
    cin >> operation;
    if (operation != 6){
        cout << "Input your second number for calculating" << endl;
        cin >> second_num;
    }
    switch (operation) {
    case 1:
        cout << "Your result = " << first_num + second_num << endl;
        break;
    case 2:
        cout << "Your result = " << first_num - second_num << endl;
        break;
    case 3:
        cout << "Your result = " << first_num * second_num << endl;
        break;
    case 4:
        cout << "Your result = " << first_num / second_num << endl;
        break;
    case 5:
        cout << "Your result = " << pow(first_num, second_num) << endl;
        break;
    case 6:
        cout << "Your result = " << sqrt(first_num) << endl;
        break;
    default:
        cout << "Unknown operation";
        break;
    }
    return 0;
}
