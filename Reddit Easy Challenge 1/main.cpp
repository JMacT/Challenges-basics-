#include <iostream>
#include <stdio.h> //For the use of scanf
#include <fstream> // For file open/close

using namespace std;


//THIS HAS BEEN SUCESSFULLY COMPLETED


/*
create a program that will ask the users name, age, and reddit username. have it tell them the information back, in the format:

your name is (blank), you are (blank) years old, and your username is (blank)
for extra credit, have the program log this information in a file to be accessed later.

https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
*/




int main()
{

    ofstream myFile;

    myFile.open("Reddit_information.txt");

    char name[100], username[100];

    float age;

    //The plan is to use Cout prompts and then use variables to save responses.
    //The current revision allows for scanf to parse strings with spaces as one entry. Malloc next for dynamic storage?
    cout << "Please enter your: " <<  "name" << endl;
    scanf("%[^\n]%*c", name);

    cout << "Please enter your: " <<  "Reddit.com username" <<endl;
    scanf("%[^\n]*c", username);

    cout << "Please enter your: " <<  "age" << endl;
    cin >> age;

    cout << "Your name is: " << name << endl;
    cout << "Your username is : " << username << endl;
    cout << "Your age is: " << age << endl;

    myFile << name << endl << username << endl << age << "\n \n \n";

    myFile.close();

    return 0;
}
