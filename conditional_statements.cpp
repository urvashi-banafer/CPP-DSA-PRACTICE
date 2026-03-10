#include <iostream>
using namespace std;

int main() {
    int age;
    cout <<"Enter your age : ";
    cin >> age;

    if(age >= 18) {
        cout << "can vote" << endl;
    }
    else {
        cout << "can't vote" << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int age;
    cout <<"Enter your age : ";
    cin >> age;

    if(age >= 18) {
        cout << "can vote" << endl;
    }
    if(age >= 45){
        cout << "contest for elections" << endl;
    }

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int marks;
    cout <<"Enter your marks : ";
    cin >> marks;

    if(marks >= 33) {
        cout << "Pass" << endl;
    }
    else {
        cout << "Fail" <<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter number : ";
   cin >> num;

   if(num % 2 == 0) {
    cout << "Number is Even." << endl;
 } else {
    cout << "Number is Odd." << endl;
 }
    return 0;
}




// Else-if statement 
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "enter marks : ";
    cin >> marks;
    if(marks >= 90) {
        cout << "A" << endl;
    } else if (marks >= 80) {
        cout << "B" << endl;
    }
    else {
         cout << "C" << endl;

    }


    return 0; 
}


//Income Tax Calculator 
#include <iostream>
using namespace std;
int main() {
    int income;
    float tax;
    cout << "enter income(in Lakhs) : ";
    cin >> income;

    if(income < 5) {
        tax = 0;
    } else if (income <= 10) {
        tax = 0.2*income;
    } else {
        tax = 0.2*income;

    }
    cout << "Tax = " <<(tax * 100000) << endl;

    return 0;
}


//Print largest of 3 numbers 
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "enter c : ";
    cin >> c;

    if(a >= b && a >= c) {
        cout << "Largest is a = " << a << endl;
    } else if (b >= c) {
        cout << "Largest is b = " << b << endl;

    } else {
        cout << "Largest is c = " << c << endl;
    }
    
    return 0;
}



//Ternary Operator 
#include <iostream> 
using namespace std;

int main() {
    bool isAdult;
    int age;
    cout << "enter age : ";
    cin >> age;

    isAdult = age >= 18 ? true : false;
    cout << "Adult  : " << isAdult << endl;
    


    return 0;
}


//largest of 2 numbers
#include <iostream> 
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    int largest = a >= b ? a : b;
    cout << "Largest is " << largest << endl;
    
    return 0;
}


//Odd or Even 
#include <iostream> 
using namespace std;

int main() {
    int num = 13;
    bool isEven = num % 2 == 0 ? true : false;
    cout << "Even number is : " << isEven << endl;
    
    return 0;
}


// Switch Statement 
#include <iostream>
using namespace std; 

int main() {
    int day;
    cout << "enter day : ";
    cin >> day;

    switch(day) {
        case 1 : cout << "Monday" << endl;
                break;
        case 2 : cout << "Tuesday" << endl;
                break;
        case 3 : cout << "Wednesday" << endl;
                break;
        case 4 : cout << "Thursday" << endl;
                break;
        case 5 : cout << "Friday" << endl;
                break;
        case 6 : cout << "Saturday" << endl;
                break;
        case 7 : cout << "Sunday" << endl;
                break;
        default : cout << "Invalid Day" << endl;

    }
    return 0;
}

//Build a calculator using switch for the 4 basic arithmetic operations (+,-,*,/)
#include <iostream>
using namespace std; 

int main() {
    int a, b;
    char op;

    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    cout << "enter operator : ";
    cin >> op;

    //Calculator
    if(op == '+') {
        cout << "a + b = " << (a + b) << endl;
    } else if (op == '-') {
        cout << "a - b = " << (a - b) << endl;
    } else if (op == '*') {
        cout << "a * b = " << (a * b) << endl;
    } else if (op == '/') {
        cout << "a / b = " << (a / b) << endl;
    } else {
        cout << "Invalid Operator";
    }


    //Switch 
    switch(op) {
        case '+' : cout << "a + b = " << (a + b) << endl;
        break;
        case '-' : cout << "a - b = " << (a - b) << endl;
        break;
        case '*' : cout << "a * b = " << (a * b) << endl;
        break;
        case '/' : cout << "a / b = " << (a / b) << endl;
        break;
        default : cout << "Invalid Operator";
    }

    return 0;
}



// Check whether the number is positive, negative or zero.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter number : ";
    cin >> num;

    if(num > 0) {
        cout << "number is positive." << endl;
    } else if(num < 0) {
        cout << "number is negative." << endl;
    } else {
        cout << "number is zero." << endl;

    }

    return 0;
}



//Check whether that year is a leap year or not 
#include <iostream>
using namespace std; 

int main() {
    int year;
    cout << "enter year : ";
    cin >> year;

    if(year % 400 == 0) {
        cout << year << " is  a leap year." << endl;
    } else if(year % 100 == 0) {
        cout << year << " is not a leap year." << endl;
    } else if(year % 4 == 0) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." <<endl;
    }
    return 0;
}

#include <iostream>
using namespace std; 

int main() {
    int a = 63, b = 36;
    bool x = (a < b) ? true : false;

    int y = (a > b) ? true : false;
    cout << x << " , " << y << endl;
    return 0;
}

#include <iostream>
using namespace std; 

int main() {
    int a = 5;

    if(++a * 5 <= 25) {
        cout << "Hello" << endl;
    } else {
        cout << "Bye" << endl;
    }
   
    return 0;
}


// for any 3 digit number check whether its an armstrong number or not.
#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "enter a 3 digit number :";
    cin >> n;

    int num = n; //creating a copy

    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int cubeSum = dig1 * dig2 * dig3 +  dig1 * dig2 * dig3  +  dig1 * dig2 * dig3;
    if(cubeSum = n) {
        cout << n << " is an Armstrong number" << endl;
    } else {
         cout << n << " is not an Armstrong number" << endl;
    }

    
    return 0;
}

