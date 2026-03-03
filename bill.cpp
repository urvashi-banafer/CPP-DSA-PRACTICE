//BILL OF 3 ITEMS WITH 18% GST TAX 
#include <iostream>
using namespace std;

int main() {
    float pencil;
    float pen;
    float eraser;

    cout<<"enter price of pencil: ";
    cin>>pencil;

    cout<<"enter price of pen: ";
    cin>>pen;

    cout<<"enter price of eraser: ";
    cin>>eraser;

    float total_cost = (pencil + pen + eraser)*1.18;
    cout<<"Total cost of items= "<<total_cost<<endl;

    return 0;
}