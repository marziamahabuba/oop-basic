 //Write a function named `max` that takes two numbers as arguments and returns the larger of them.


#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Max of " << a << " and " << b << " is " << max(a, b) << endl;
    return 0;
}
