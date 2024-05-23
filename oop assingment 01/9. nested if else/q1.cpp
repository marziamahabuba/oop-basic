//Write a program that checks the age and height of a person to determine if they can ride a roller coaster.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    double b;
    cout << "Enter your age: ";
    cin >> a;
    cout << "Enter your height in meters: ";
    cin >> b;
    if (a>= 12 && b >= 1.4) {
        cout << "You can ride the roller coaster.";
    } else {
        cout << "Sorry, you don'tmatch the requirements to ride the roller coaster.";
    }
    return 0;
}
