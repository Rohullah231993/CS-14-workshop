/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main () {
    string traffic;
    
    cout << "Enter the traffic situation ( busy, clear of slow):";
    cin >> traffic;
    
    if (traffic == "bussy") {
        cout << "Make sure leave early." << endl;
    }
    else if (traffic == "clear") {
        cout << "leave ontime." << endl;
        
    }
    else if (traffic == "slow") {
        cout << " start driving early." << endl;
        
    }
    else {
        cout << "Sorry i am not sure about the traffic situation." << endl;
    }
    return 0;
}
