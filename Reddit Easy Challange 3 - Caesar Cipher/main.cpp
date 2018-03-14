/*
Welcome to cipher day!

write a program that can encrypt texts with an alphabetical caesar cipher. This cipher can ignore numbers, symbols, and whitespace.

for extra credit, add a "decrypt" function to your program!
*/



#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


/*
This is the plan:
http://www.cplusplus.com/forum/general/74820/
*/
void fixStr(char*, char*, int);
void caesar_Cipher(char*, int, int);



int main ( )
{

    int cipher_Val = 1; //How many chars do you want to shift by?
    char TEMP[100];
    //this holds the string in an array format for crawling later.
    char new_String[100];

    cout << "You should enter a string. I'll spit out what I read." << endl;
    scanf("%[^\n]*c", TEMP);

    fixStr(&TEMP[0], &new_String[0], cipher_Val);

    //caesar_Cipher(&new_String[0], cipher_Val, strlen(new_String));
    cout << new_String;
}


void caesar_Cipher(char*str, int cipher, int str_Leng){
    int i;
    for (i=0; i<str_Leng; i++){
      cout << "This Char: " << *str << endl;

      str++;
    };

    return;
};
void fixStr(char *source,char *dest, int cipher){
    int i=0;
    char val;
    int val_int=0;
    int _bool = 0; //Is this a letter that needs to be cipher'd?

    for(i=0; i<100; i++){
        _bool = 0;

        val = *(source+i); //Use an easier variable to edit in-line.
        val_int = *(source+i);

        if(val != '\0'){
            if ((val_int >= 97) && (val_int <= 122)){
                _bool = 1;

            }
            if ( (val_int >= 65) && (val_int <= 90)){
                _bool = 1;

            }
            if (_bool = 1){
                val = val_int + cipher; //If it is a valid letter, apply the cipher
            }
            else{
                if ( val_int != 32 ){
                    while( val_int < 65){
                        val += 1;
                    };
                };
            };

            *(dest+i) = val;
        }

        else{
            *(dest+i) = '\0';
            i=100;
        };
    };
<<<<<<< HEAD
    cout << endl << "this is the test of (source+1)+1: " << ((source+1)+1) << endl;
=======
>>>>>>> ddd1a2d6037ab40cfc8f0871be0e970f0480ed20
};

