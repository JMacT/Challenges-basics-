#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    int h;
    int m;
    int i=0;
    //string input;
    vector<int> time;

    //get time
    cout << "what time is it?\n";
    while((cin >> h) && (h != 9999)){
        time.push_back(h);
    };
    time.push_back('\0');
    // assume format hh : mm

    while(time[i]!='\0'){
        if (i==2){
            cout << " : ";
        };
        cout << time[i];
        i++;
    };


    //Handle the ampm
    string ampm = "pm";
    if(h >= 1200){
        ampm = "pm";
    };

    cout << ampm;


}
