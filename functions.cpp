#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)" << endl;
}

int main() {
    sayHello(); //function call
    return 0;
}



#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)" << endl;
}

int main() {
    sayHello(); //function call
    sayHello();
    sayHello();
    return 0;
}



#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello :)" << endl;
}

void assistance() {
    sayHello();
        cout << "work done" << endl;
    }

int main() {
    assistance(); 
    return 0;
}



//Forward Declaration 
#include <iostream>
using namespace std;

void sayHello(); //function declare

int main() {
    sayHello();
    return 0;
}

void sayHello() {
    cout << "Hello :)" << endl;
}



//Parameters and Arguments 
#include <iostream> 
using namespace std;

int sum(int a, int b) { // a,b are parameters
    int sum = a + b;
    return sum;
}
int diff(int a, int b) { // a,b are parameters
    int diff = a - b;
    return diff;
}

int main() {
    int s = sum(2, 4); // 2,4 are arguments
    cout << "sum = " << s << endl;
    int d = diff(4, 2); // 4,2 are arguments
    cout << "diff = " << d << endl;
    return 0;
}



//Default Parameter
#include <iostream> 
using namespace std;

int sum(int a, int b = 1) { // b is a default parameters
    int sum = a + b;
    return sum;
}

int main() {
    int s = sum(2); 
    cout << "sum = " << s << endl;
    return 0;
}


#include <iostream> 
using namespace std;

int sum(int a, int b = 1) { // b is a default parameters
    int sum = a + b;
    return sum;
}

int main() {
    int s = sum(2, 5); 
    cout << "sum = " << s << endl;
    return 0;
}


//WAP to find the product of 2 numbers - a & b

#include <iostream> 
using namespace std;

int prod(int a, int b) { 
    int prod = a * b;
    return prod;
}

int main() {
    int p = prod(10, 20); 
    cout << "prod = " << p << endl;
    return 0;
}



//WAP to print if a number is odd or even
#include <iostream> 
using namespace std;

bool isEven(int n) {
    if(n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    cout << isEven(20) << endl;
    return 0;
}



//WAP to print the factorial of a number n
#include <iostream> 
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "factorial (" << n << ") = " << fact << endl;
    return fact;
}
int main() {
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    factorial(6);
    return 0;
}



//Local Scope Variable
//function scope 
#include <iostream>
using namespace std;

void sum1(int a, int b) {
    int s = a + b;
    cout << s << endl;;
}

int main() {
    sum1(5, 4);
    int s = 10;
    cout << s << endl;;
    return 0;
}

//if - else scope
#include <iostream>
using namespace std;

void sum3(int a, int b) {
    if(a >= 1) {
        int x = 25;
        cout << x;
    }
}

int main() {
    sum3(5, 4);
    int s = 10;
    cout << s << endl;;
    return 0;
}


#include <iostream>
using namespace std;

void sum2(int a, int b) {

        int x = 25;
        cout << x;
    }

int main() {
    sum2(5, 4);
    int s = 10;
    cout << s << endl;;
    return 0;
}


#include <iostream> 
using namespace std;

int num = 25;

void sum4(int a, int b) {
    cout << num << endl;
    int s = a + b;
    cout << s << endl;
}

int main() {
    sum4(5, 4);
    int s = 10;
    cout << num << endl;

    return 0;
}


//WAP to print if a number is prime or not.
#include <iostream> 
using namespace std;

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i <= n-1; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
   cout << isPrime(22) << endl;
    return 0;
}



#include <iostream> 
using namespace std;

bool isPrime2(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
   cout << isPrime2(5) << endl;
    return 0;
}




#include <iostream> 
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int binCoeff(int n, int r) {
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int result = val1 / (val2 * val3);
    return result;
}


int main() {
    cout << binCoeff(4, 2) << endl;
    return 0;
}




//Function Overloading
#include <iostream> 
using namespace std;

int sum(int a, int b) {
    cout << (a + b) << endl;
    return a + b;
}
double sum(double a, double b) {
    cout << (a + b) << endl;
    return a + b;
}
int sum(int a, int b, int c) {
    cout << (a + b + c) << endl;
    return a + b + c;
}

int main() {
    sum(2, 3);
    sum(12, 13);
    sum(1.5, 2.5);
    sum(1, 2, 3);

    return 0;
}





//Print all primes in range from 2 to n.
#include <iostream> 
using namespace std;

bool isPrime(int n) {
    if(n == 1) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
void allPrimes(int n) {
    //all primes -> 2 to n
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) { //true
            cout << i << " ";
        }
    }
    cout << endl;
}


int main() {
    allPrimes(13);
    return 0;
}



//Assignment Questions 
//Write a function to check if a number is palindrome in C++
#include <iostream>
using namespace std;

int reverse(int n) {
    int res = 0;
    while(n > 0) {
        int lastDig = n % 10;
        res = res*10 + lastDig;
        n = n/10;
    }
    return res;
}

bool isPalindrome(int num) {
    int revNum = reverse(num);
    return num == revNum;
}

int main() {
    cout << isPalindrome(121) << endl;

    return 0;
}




//Write a function to calculate the sum of digits of a number
#include <iostream>
using namespace std;

int digSum(int n) {
    int res = 0;
    while(n > 0) {
    res += n % 10;
    n = n / 10;
}
    return res;
}



int main() {
    cout << digSum(52) << endl;

    return 0;
}


//Write a function which takes 2 numbers as parameters (a & b).
#include <iostream>
using namespace std;


int abSquare(int a, int b) {
    return a*a + b*b + 2*a*b;
}

int main() {
    cout << abSquare(2, 5) << endl;
    return 0;
}

//Write a function that prints the largest of 3 numbers.
#include <iostream>
using namespace std;


int largest(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    }
    else if(b >= c) {
        return b;
    }
    else {
        return c;

    }
        
}
int main() {
    cout << largest(6, 9, 3) << endl; 

    return 0;
}

//Write a function that accepts a character (ch) as parameter & returns the character that occurs after ch in the English alphabet.
#include <iostream>
using namespace std;

char getNextChar(char ch) {
    if(ch == 'z') {
        return 'a';
    } 
    else {
        return ch + 1;
    }
}

int main() {
    cout << getNextChar('u') << endl;
    return 0;
}
