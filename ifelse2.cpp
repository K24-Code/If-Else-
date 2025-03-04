#include<iostream>
using namespace std;
int main() 
{
    int budget;
    cout<<"Enter your budget for your car: ";
    cin>> budget;

    if(budget>2000000) {
        cout<<"you can buy scorpio"<<endl;
    }
    else{
        cout<<"you can't buy scorpio "<<endl;
    }
    return 0;
}