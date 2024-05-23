//Create a program that determines shipping cost based on weight and distance: less than 5 kg, more than 5 kg but less than 20 kg, and more than 20 kg.
#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c ;
    cout << "Enter the weight of the package in kg: ";
    cin >> a;
    cout << "Enter the distance to be shipped in km: ";
    cin >> b;
    if (a < 5) {
        c = 2.0 * b;
    } else if (a >= 5 && b < 20) {
        c = 5.0 * b;
    } else {
        c = 10.0 * b;
    }
    cout << "The shipping cost is: $" <<
    c << endl;
    return 0;
}
