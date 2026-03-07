#include <iostream>
using namespace std;

int main() {
    const int num = 25;
    int num2 = 25;
    num2 = 35;
    // num = 35; It cannot be modified because it is defined as a constant.
    const float PI = 3.14;
    const float g = 9.8;
    return 0;
}


#include <iostream>
//symbolic constants 
#define X 25
using namespace std;

int main() {
    const int Y = 35;
    cout<<X; //25
    cout<<Y;
    
    return 0;
}


#include <iostream>
//symbolic constants 
#define ll long long
using namespace std;

int main() {
    ll x;
    ll y = 25;
    
    return 0;
}


//Type casting
//Implicit conversion
#include <iostream>
using namespace std;

int main() {
    cout<< (10/3) << endl; //3
    cout<< (10/3.0) << endl; //3.3333
    cout<< ('A' + 1) <<endl;
    cout<< ('B' + 1) <<endl;
    cout<< ('A' - 0) <<endl;
    cout<< ('a' - 0) <<endl;

    return 0;
}


//Explicit Type Conversion 
#include <iostream>
using namespace std;

int main() {
    cout<< (int)('A') <<endl;
    float PI = 3.14;
    cout<< (int)(PI) <<endl;
    cout<< ((float)10/3) <<endl;
    cout<<(char)('A'+1) <<endl;
    cout<<(char)('A'+2) <<endl;
    cout<<(char)('A'+3) <<endl;
    
    return 0;
}


#include <iostream>
using namespace std;

int main() {
   cout<< ((bool)3 + 2) <<endl;
   cout<< (23.5 + 2 + 'A') <<endl;
    return 0;
}


//Arithmetic Operators 
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 3;
    cout << "+ " << (a + b) <<endl; //8
    cout << "- " << (a - b) <<endl; //2
    cout << "* " << (a * b) <<endl; //15
    cout << "/ " << (a / b) <<endl; //1
    cout << "% " << (a % b) <<endl; //Modulo (remainder) : 2
    return 0;
}


//Unary Operator 
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    a = a + 1; // a++
    a = a - 1; // a--
    cout << a; //4

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    a++; //4
    cout << "a = " << a << endl; 
    a--; //3
    cout << "a = " << a << endl; 
    
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int a = 3;
    ++a; //4
    cout << "a = " << a << endl; 
    --a; //3
    cout << "a = " << a << endl; 
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = ++a; //4
    cout << "a = " << a << endl;  //4
    cout << "b = " << b << endl;  //4
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = a++; 
    cout << "a = " << a << endl;  //4
    cout << "b = " << b << endl;  //3
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = a--; 
    cout << "a = " << a << endl;  //2
    cout << "b = " << b << endl;  //3
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = --a; 
    cout << "a = " << a << endl;  //2
    cout << "b = " << b << endl;  //2
    return 0;
}

//Assignment Operators
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    a += 5; // a = a + 5 => 15
    cout << a << endl; //15
    a -= 5; // 10
    cout << a << endl; //10
    a *= 5; // a = a * 5 => 50
    cout << a << endl; //50
    a /= 5;
    cout << a << endl; //10
    return 0;
}


//Relational Operators -> T / F
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    cout << (a > b) << endl;   //False -> 0
    cout << (a < b) << endl;   //True -> 1
    cout << (a >= b) << endl;  //False -> 0
    cout << (a <= b) << endl;  //True -> 1
    cout << (a == b) << endl;  //False -> 0
    cout << (a != b) << endl;  //True -> 1



    return 0;
}


//Logical Operators 
#include <iostream>
using namespace std;

int main() {
    cout << (( 3 < 5) && (10 > 5)) << endl; //True -> 1
    cout << (( 3 < 5) && (10 == 5)) << endl; //False -> 0
    cout << (( 3 < 5) || (10 == 5)) << endl; //True -> 1
    cout << (( 3 == 5) || (10 == 5)) << endl; //False -> 0
    cout <<(!(3 == 5)) << endl; // True -> 1
    cout <<(!(3 != 5)) << endl; // False -> 0
    cout <<(!(3 > 5)) << endl; // True -> 1

    return 0; 
}


#include <iostream>
using namespace std;

int main() {
    int x = 2 , y = 5;
    int exp1 = (x * y / x);
    int exp2 = (x * (y / x));
    cout << exp1 << ",";
    cout << exp2 << "\n";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int x = 10 , y = 5;
    int exp1 = (y * (x / y + x / y));
    int exp2 = (y * x / y + y * x / y);
    cout << exp1 << " ";
    cout << exp2 << "\n";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int x = 200, y = 50, z = 100;
    if(x > y && y > z) {
        cout << "Hello \n";
    }
    if(z > y && z < x) {
        cout << "C++ \n";
    }
    if((y + 200) < x && (y + 150) < z) {
        cout << "Hello C++ \n";
    }
    return 0;
}