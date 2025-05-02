#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double first_num;
    double second_num;
    int operation;
    int result = 0;
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
        result = first_num + second_num;
        break;
    case 2:
        result = first_num - second_num;
        break;
    case 3:
        result = first_num * second_num;
        break;
    case 4:
        result = first_num / second_num;
        break;
    case 5:
        result = pow(first_num, second_num);
        break;
    case 6:
        result = sqrt(first_num);
        break;
    default:
        cout << "Unknown operation";
        break;
    }
    cout << "Your result = " << result << endl;
    return 0;
}
