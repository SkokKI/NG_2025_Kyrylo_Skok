#include <iostream>

using namespace std;

int main()
{
    string user_sentence = "";
    bool word_identifier = false;
    int num_word = 0;
    cout << "Input your sentence" << endl;
    getline (cin, user_sentence);
    for (int letter_counter = 0; letter_counter < user_sentence.length(); letter_counter++){
        if(user_sentence[letter_counter] >= 'a' && user_sentence[letter_counter] <= 'z' || user_sentence[letter_counter] >= 'A' && user_sentence[letter_counter] <= 'Z'){
            if(word_identifier == false){
                num_word++;
            }
            word_identifier = true;
        }
        else{
            word_identifier = false;
        }
    }
    cout << num_word;
    cout << endl;
    return 0;
}
