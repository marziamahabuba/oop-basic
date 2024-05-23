 //Create an array of 6 integers, print them, reverse the array, then print it again.


#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    cout <<"print 6 item"<<endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << endl;

    }
    cout << endl;
    cout <<"print 6 revers item"<<endl;
    for (int i = 5; i >= 0; i--) {
        cout << arr[i] << endl;
    }
    return 0;
}
