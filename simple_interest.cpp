
//SIMPLE INTEREST CALCULATOR 
#include <iostream>
using namespace std;

int main() {
    float P;
    float R;
    float T;

    cout<<"Enter Principle : ";
    cin>>P;

    cout<<"Enter Rate : ";
    cin>>R;
    
    cout<<"Enter Time : ";
    cin>>T;
    
    float SI = (P*R*T)/100;
    cout<<"Simple Interest = "<<SI<<endl;

    return 0;
}