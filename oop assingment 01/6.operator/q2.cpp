//Create a program that uses increment and decrement operators on a variable and prints the result each time.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"The Orginal number is : "<<a<<endl;
    a++;
    cout<<"The post increament number is : "<<a<<endl;
    a--;
    cout<<"The post decreament  number is : "<<a<<endl;
    ++a;
    cout<<"The pre increament  number is : "<<a<<endl;
    --a;
    cout<<"The pre decreament  number is : "<<a<<endl;
    return 0;
}
