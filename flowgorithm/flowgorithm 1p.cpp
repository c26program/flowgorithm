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
    int a;
    int b;
    int c;
    
    cin >> a;
    cin >> b;
    cin >> c;
    int m;
    
    m = a + b + c;
    int y;
    
    cin >> y;
    int s;
    
    s = (double) m / y;
    cout << s << endl;
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
