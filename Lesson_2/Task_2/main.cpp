#include <iostream>

using namespace std;

int main()
{
    int user_nums_size = 5;
    int max_num = 0;
    int user_nums[user_nums_size];
    for(int num_counter = 0; num_counter < user_nums_size; num_counter++){
        user_nums[num_counter] = 0;
    }
    for(int num_counter = 0; num_counter < user_nums_size; num_counter++){
        cout << "Input " << num_counter + 1 << " num ";
        cin >> user_nums[num_counter];
        if(user_nums[num_counter] < 0){
            cout << "Input number 0 or more\n";
            num_counter--;
        }
        if(max_num < user_nums[num_counter]){
            max_num = user_nums[num_counter];
        }
    }
    for(int star_counter = 0; star_counter < max_num; star_counter++){
        for(int string_counter = 0; string_counter < user_nums_size; string_counter++){
            if(user_nums[string_counter] > star_counter){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
