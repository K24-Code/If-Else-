#include<iostream>
using namespace std;
int main() {
    //1
    int age;
    cout<<"Enter Your Age: ";
    cin>> age;

    if(age>18) {
        cout<<"You are ELIGIBLE for Voting "<<endl;
    }
    else{
        cout<<"You are NOT ELIGIBLE for Voting "<<endl;
    
    }
    return 0;
}