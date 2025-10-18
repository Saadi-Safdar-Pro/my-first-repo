#include <iostream>
using namespace std;

int main() {
    double temp;
    char scale;

    cout << "Enter temperature followed by scale (C/F): ";
    cin >> temp >> scale;

    if (scale == 'C' || scale == 'c') {
        double f = (temp * 9 / 5) + 32;
        cout << temp << "°C = " << f << "°F" << endl;
    } else if (scale == 'F' || scale == 'f') {
        double c = (temp - 32) * 5 / 9;
        cout << temp << "°F = " << c << "°C" << endl;
    } else {
        cout << "Invalid scale. Use C or F." << endl;
    }

    return 0;
}
