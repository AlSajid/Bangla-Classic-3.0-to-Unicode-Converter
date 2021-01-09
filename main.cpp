#include <cstring>
#include <fstream>
#include <iostream>
#include <time.h>
#include "placement.cpp"
#include "banglaANSICharacters.cpp"
;
#include "converter.cpp"
;
using namespace std;

int main()
{
    cout << "--------------------------------------" << endl;
    cout << "Bijoy Classic 3.0 to Unicode Converter" << endl;
    cout << "--------------------------------------" << endl;
    cout << "\n";

    cout << "Press ENTER to open editor" << endl;
    system("type nul > Bangla_Classic.txt");
    system("Bangla_Classic.txt");
    system("cls");
    convert();
    system("output.txt");
    system("del Bangla_Classic.txt");

    return 0;
}