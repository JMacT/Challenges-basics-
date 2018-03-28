#include <iostream>
#include <cstdlib>
#include <ctime> //required to seed Srand



//challenging myself not to use <string>

/*
You're challenge for today is to create a random password generator!

For extra credit, allow the user to specify the amount of passwords to generate.

For even more extra credit, allow the user to specify the length of the strings he wants to generate!
*/

using namespace std;

void generate_random_char(char*, int);

int main()
{
    char new_Password [100][10];
    int password_Length = 0;
    int qty_Pass = 0;
    int i, j =0; // index for # passwords

    std::srand((unsigned)time(0));
    //generates one single random LETTER

    cout << "How long of a password should I generate (max 100)?" << endl;
    cin >> password_Length;

    while ( password_Length > 100 || password_Length < 1){
        cout << "Try again dummie!" << endl;
        cout << "How long of a password should I generate (max 100)?" << endl;
        cin >> password_Length;
    };

    cout << "How many passwords would you like me to generate?" << endl;
    cin >> qty_Pass;

    for (i=0; i<qty_Pass; i++){
        generate_random_char(&new_Password[0][i], password_Length);
    };

    cout << "Here are your new passwords: " << endl;

    for(i=0 ; i < qty_Pass; i++){
        for (j=0; j< password_Length ; j++){
            cout << new_Password[j][i];
        };

        cout << endl;
    };

    cout << "Ta-Da!" << endl;

    return 0;
}

void generate_random_char(char *string_ptr, int string_leng){
    int temp, random_int, i = 0;

    temp = rand();
    random_int = temp % RAND_MAX; //initialize first byte

    *string_ptr = random_int;
    for(i=0; i < string_leng; i++){
        while ((*string_ptr >= 123) || (*string_ptr <= 64)){
            temp = rand();
            random_int = temp % RAND_MAX;
            *string_ptr = random_int % RAND_MAX;
            if((*string_ptr < 97) && (*string_ptr > 90)){
                *string_ptr = 1;
            };
        };
        string_ptr++;
    };
    *string_ptr = '\0';

    return;
};

