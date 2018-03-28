#include <iostream>
#include <vector>

using namespace std;

int main(){

    //format: vector<datatype> nameOfVector

    vector<int> myVector; //resizes automatically

    myVector.push_back(3);

    cout << "Vector: ";

    for(unsigned int i = 0; i < myVector.sice(); i++ ){ //make sure that int i=0 is unsigned because size cannot be negative.

        cout << myVector[] << "" ;

    };

    cout << endl;


    return 0;
}
