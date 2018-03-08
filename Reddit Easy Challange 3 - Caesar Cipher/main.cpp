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
void fixStr(char*, char*);
void caesar_Cipher(char*, int, int);



int main()
{

    int cipher_Val = 12; //How many chars do you want to shift by?
    char TEMP[100];
    //this holds the string in an array format for crawling later.
    char new_String[100];

    cout << "You should enter a string. I'll spit out what I read." << endl;
    scanf("%[^\n]*c", TEMP);

    fixStr(&TEMP[0], &new_String[0]);

    //caesar_Cipher(&new_String[0], cipher_Val, strlen(new_String));

}


void caesar_Cipher(char*str, int cipher, int str_Leng){
    int i;
    for (i=0; i<str_Leng; i++){
      cout << "This Char: " << *str << endl;

      str++;
    };

    return;
};
void fixStr(char *source,char *dest){
    int i=0;

    for(i=0; i<100; i++){
        if(*(source+i) != '\0'){
            *(dest+0) = *(source+i); //HOW DO I ADD TO THE VALS?
            cout << *(dest+i);
        }

        else{
            i=100;
        };
    };
    cout << endl << "this is the test of source+1: " << (source+2) << endl;
};

