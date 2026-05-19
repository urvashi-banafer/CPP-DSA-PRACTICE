#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << &a << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << &a << " = " << ptr << endl;

    float pi = 3.14;
    float *ptr2 = &pi;
    cout << &pi << " = " << ptr2 << endl;

    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr2) << endl;


    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    int **pptr = &ptr;

    cout << &ptr << " = " << pptr << endl;
   

    return 0;
}




//Dereference operator
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << &a << endl;
    cout << *(&a) << endl;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 20;
    cout << a << endl;
    return 0;
}



//Null pointer 
#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;
    cout << ptr << endl;
    return 0;
}




//pass by value
#include <iostream>
using namespace std;


void changeA(int a){
    a = 20;
    cout << a << endl;
}
int main() {
    int a = 10;
    changeA(a);
    cout << a << endl;
    return 0;
}



#include <iostream>
using namespace std;


void changeB(int param){
    param = 20;
    cout << param << endl;
}
int main() {
    int a = 10;
    changeB(a);
    cout << a << endl;
    return 0;
}


//pass by reference using pointer
#include <iostream>
using namespace std;


void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}
int main() {
    int a = 10;
    changeA(&a);
    cout << a << endl;
    return 0;
}




//Reference variable 
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &b = a;
    b = 25;
    cout << b << endl;
    cout << a << endl;

    return 0;
}


//pass by reference using reference variable
#include <iostream>
using namespace std;

void changeC(int &a) {
    a = 20;
    cout << a << endl;
}

int main() {
    int a = 10;
    changeC(a);
    cout << a << endl;

    return 0;
}




#include <iostream>
using namespace std;

void changeD(int &param) {
    param = 20;
    cout << param << endl;
}

int main() {
    int a = 10;
    changeD(a);
    cout << a << endl;

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1;

    cout << ptr2 << endl;
    cout << ptr1 << endl;
    cout << &x << endl;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int *ptr = 0;
    cout << ptr << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout << *ptr << endl; 
    return 0;
}



#include <iostream>
using namespace std;

void multiplyBy2(int &a, int &b, int &c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int main() {
    int x = 1, y = 2, z = 3;
    multiplyBy2(x, y, z);
    cout << x << y << z << endl;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    ch += a;
    *ptr += ch;
    cout << a << "," << ch << endl;
    return 0;
}