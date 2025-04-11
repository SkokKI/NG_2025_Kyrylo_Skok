#include <iostream>

using namespace std;

int main()
{
    bool finish_program = true;
    int bank_account_size = 10;
    int bank_accounts[bank_account_size];
    int user_choice = 0;
    int user_account_choice = -1;
    int user_value = 0;
    int sum = 0;
    for(int acc_counter = 0; acc_counter < bank_account_size; acc_counter++){
        bank_accounts[acc_counter] = 0;
    }
    while(finish_program == true){
        cout << "What are you want?\n1.Add or withdraw money\n2.Show every bank account\n3.Show sum on every bank account\n4.Finish program\n";
        cin >> user_choice;
        switch(user_choice) {
        case 1:
            user_account_choice = -1;
            cout << "Input num of bank account\n";
            cin >> user_account_choice;
            user_account_choice--;
            if(user_account_choice >= 0 && user_account_choice < bank_account_size){
                cout << "Do you want\n1.Withdraw money\n2.Add money\n";
                cin >> user_choice;
                if (user_choice == 1){
                    cout << "Input value, that you want withdraw from account\n";
                    cin >> user_value;
                    if(user_value < 0){
                        cout <<  "Unknown operation, try again";
                        system("pause");
                        break;
                    }
                    if(bank_accounts[user_account_choice] >= user_value){
                    bank_accounts[user_account_choice] -= user_value;
                    }
                    else{
                        cout << "You don't have enough money on account, try again";
                        system("pause");
                    }
                }
                else if(user_choice == 2){
                    cout << "Input value, that you want add to account\n";
                    cin >> user_value;
                    bank_accounts[user_account_choice] += user_value;
                }
                else{
                    cout <<  "Unknown operation, try again";
                    system("pause");
                }
            }
            else{
                cout << "Unknown num of bank account, try again";
                system("pause");
            }
            break;
        case 2:
            for(int acc_counter = 0; acc_counter < bank_account_size; acc_counter++){
                cout <<"Money on account "<< acc_counter + 1 << ": " <<bank_accounts[acc_counter] << endl;
            }
            system("pause");
            break;
        case 3:
            sum = 0;
            for(int acc_counter = 0; acc_counter < bank_account_size; acc_counter++){
                sum += bank_accounts[acc_counter];
            }
            cout << "Sum on every account: " << sum << endl;
            system("pause");
            break;
        case 4:
            finish_program = false;
            cout << "Program was finish";
            system("pause");
            break;
        default:
            cout << "Unknown operation, try again";
            system("pause");
            break;
        }
        system("cls");
    }
    return 0;
}
