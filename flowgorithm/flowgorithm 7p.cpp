#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    string username;
    string password;
    
    cin >> username;
    cin >> password;
    string loginid;
    
    loginid = username;
    string login;
    
    login = username;
    if (loginid == username) {
        cout << login << endl;
    } else {
        cout << !login << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
