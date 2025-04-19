#include <iostream>

using namespace std;

int main()
{
    char vowels[6] = {'a','e','i','o','u','y'};
    string user_sentence = "";
    double vowels_num = 0;
    double all_letter_num = 0;
    double result;
    cout << "Input your sentence" << endl;
    getline(cin, user_sentence);
    for(int letter_counter = 0; letter_counter < user_sentence.length(); letter_counter++){
        if(user_sentence[letter_counter] >= 'a' && user_sentence[letter_counter] <= 'z' || user_sentence[letter_counter] >= 'A' && user_sentence[letter_counter] <= 'Z'){
            user_sentence[letter_counter] = tolower(user_sentence[letter_counter]);
            for(int vowels_counter = 0; vowels_counter < 6; vowels_counter++){
                if(user_sentence[letter_counter] == vowels[vowels_counter]){
                    vowels_num++;
                    break;
                }
            }
            all_letter_num++;
        }
    }
    result = (vowels_num * 100) / all_letter_num;
    cout << "Procentage of vowels: " << result << "%\nProcentage of unvowels: " << 100 - result << "%" << endl;
    return 0;
}
