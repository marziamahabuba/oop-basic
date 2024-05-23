//Create a program that compares two numbers and prints which one is bigger or if they are equal.
#include <bits/stdc++.h>
using namespace std;
int main() {
int a,b;
cout<<"Enter The first number : ";
cin>>a;
cout<<"Enter The Second number : ";
cin>>b;
if(a>b){
    cout<<"The bigger number is "<<a;
}
else if(a<b){
    cout<<"The bigger number is "<<b;
}
else{
    cout<<"The numbers are Equal. ";
}
    return 0;
}
