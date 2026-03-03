#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    //input a
    cout<<"Enter a : ";
    cin>>a;
    
    //input b
    cout<<"Enter b : ";
    cin>>b;
     
    //calculate sum
    int sum = a + b;
    int prod = a * b;
    int diff = a - b;
    int div = a / b;
    cout<<"sum = "<<sum<<endl;
    cout<<"prod = "<<prod<<endl;
    cout<<"diff = "<<diff<<endl;
    cout<<"div = "<<div<<endl;
     return 0;
}