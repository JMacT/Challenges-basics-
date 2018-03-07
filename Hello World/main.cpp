#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream myFile;

    myFile.open("testFile.txt");

    myFile << "Is this particular script working?";

    myFile.close();
}
