#include <iostream>

using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter the temperature in celsius:\n";
    cin >> celsius;

    fahrenheit =(1.8*celsius) + 32;

    cout << celsius <<" Centigrade is equal to " << fahrenheit << "Fahrenheit";

    return 0;
}
