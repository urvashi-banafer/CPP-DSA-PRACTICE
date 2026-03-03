
//DATA TYPES
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    int marks = -200;
    cout<<"size of int = "<< sizeof(int)<<endl;
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    cout<<"grade = "<<grade<<endl;
    cout<<"size of char = "<< sizeof(char)<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int age = 25;
    bool isAdult = true;

    cout<<"isAdult = "<<isAdult<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    return 0;

}


#include <iostream>
using namespace std;

int main() {
    float cgpa = 8.9;

    cout<<"cgpa = "<<cgpa<<endl;
    cout<<"size of float = "<<sizeof(float)<<endl;
    return 0;

}


#include <iostream>
using namespace std;

int main() {
    double price = 99.99;

    cout<<"price = "<<price<<endl;
    cout<<"size of double = "<<sizeof(double)<<endl;
    return 0;

}


#include <iostream>
using namespace std;

int main() {
    float PI1 = 3.14159265359;
    double PI2 = 3.14159265359;

    cout<<"PI1 "<< PI1 <<endl;
    cout<<"PI2 "<< PI2 <<endl;
       return 0;

}


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float PI1 = 3.14159265359;
    double PI2 = 3.14159265359;

    cout<<setprecision(12)<<"PI1 "<< PI1 <<endl;
    cout<<setprecision(12)<<"PI2 "<< PI2 <<endl;

       return 0;

}
