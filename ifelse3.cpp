#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter two numbers: "<<endl;
    cin>> x >> y ;
    if(x>y){
        cout<<"the bigger number is "<<x;
    }
    else{
        cout<<"the bigger number is "<<y;
    }
    return 0;
}