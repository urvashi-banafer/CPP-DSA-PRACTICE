//for loop
#include <iostream>
using namespace std;

int main() {
    int num;
    for(num = 1; num <= 5; num++){
        cout << num << " ";
    }
    cout << endl;
    cout << "last value of num = " << num << endl;

    return 0;
}



//Print "Hello World" 5 times 
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        cout <<"Hello World" << endl;
    }
    return 0;
}


//Print numbers from 1 to n 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your n : ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}


//Print sum of first N natural numbers 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your n : ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}


//while loop 
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i < 3) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your n : ";
    cin >> n;
    int i = 1;
    while(i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 5) {
        cout << "Hello World" << endl;
        i++;
    }
    return 0;
}
  

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your n: ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while(i <= n) {
        sum += i;   // add i to sum
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}



//Print the square pattern using for loop
#include <iostream> 
using namespace std;

int main() {
    for(int i = 1; i <= 4; i++) {
        cout << "****" << endl;
    }

    return 0;
}

//Print numbers from n to 1 using for loop.
#include <iostream> 
using namespace std;

int main() {
    int n = 12;

    for(int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}



// //Print the sum of digits of a number using while loop.
#include <iostream> 
using namespace std;

int main() {
    int n = 10829;
    int digSum = 0;

    while(n > 0) {

        int lastDig = n % 10;

        digSum += lastDig;

        n = n / 10;
    }
    cout << "Sum = " << digSum << endl;
    return 0;
}

//Print the sum of odd digits of a number using while loop.
#include <iostream> 
using namespace std;

int main() {
    int n = 10829;
    int digSum = 0;

    while(n > 0) {

        int lastDig = n % 10;
        if(lastDig % 2 != 0) {
             digSum += lastDig;

        }
        n = n / 10;
    }
    cout << "Sum = " << digSum << endl;
    return 0;
}

//Print the digits of a given number in reverse using while loop.
#include <iostream>
using namespace std;

int main() {
    int n = 10829;
    
    while(n > 0) {
        int lastDig = n % 10;
        cout << lastDig;
        n /= 10;
    }
    cout << endl;

    return 0;
}


//Reverse a given number & print the result.
#include <iostream>
using namespace std;

int main() {
    int n = 12345;
    int res = 0;
    
    while(n > 0) {
        int lastDig = n % 10;
        res = res * 10 + lastDig;
        n /= 10;
    }
    cout << "reverse =  " << res << endl;

    return 0;
}



// do - while loop 
//Print number from 1 to 5 using do - while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    
    cout << endl; 
    return 0;
}


//Difference between do-while and while loop.
#include <iostream>
using namespace std;

int main() {
    int val = 1;
    do {
        cout << "apna college in do - while loop" << endl;
    } while (val > 5);
    
    while(val > 5){
        cout << "apna college in while loop" << endl;
    }
    return 0;
}


//Break Statement 
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 10) {
        if(i == 3) {
            break;
        }
        cout << i << endl;
        i++;
    }
    cout << "out of loop now" << endl;

    return 0;
}

//WAP where user can keep entering numbers till they enter a multiple of 10
#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "enter number : ";
        cin >> n;
        if(n % 10 == 0) {
            break;
        }
        cout << "you entered " << n << endl;
    } while (true);
   
    return 0;
}



//Continue Statement 
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}


//WAP to show numbers entered by users excepts multiplies of 10
#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "enter number : ";
        cin >> n;
        if(n % 10 == 0) {
            continue;
        }
        cout << "you entered " << n << endl;
    } while (true);
   
    return 0;
}


//Check if a number is prime or not.
//Method 1 
#include <iostream>
using namespace std;

int main() {
   int n = 9; 
   bool isPrime = true;

   for(int i = 2; i <= n-1; i++) { // i is a factor of n; i completely divides n; n is non-prime
    if(n % 1 == 0) {
        isPrime = false;
        break;
    }
   }
   if(isPrime == true) {
    cout << "number is Prime" << endl;
   } else {
    cout << "number is NOT Prime" << endl;
   }
    return 0;
}


//Method 2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n = 13; 
   bool isPrime = true;

   for(int i = 2; i <= sqrt(n); i++) {
    if(n % 1 == 0) { // i is a factor of n; i completely divides n; n is non-prime
        isPrime = false;
        break;
    }
   }
   if(isPrime) {
    cout << "number is Prime" << endl;
   } else {
    cout << "number is NOT Prime" << endl;
   }
    return 0;
}



//WAP to find the Factorial of a number entered by the user 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact += i;
    }

    cout << "Factorial of " << n << " = " << fact << endl;


    return 0;

}

//WAP to print the multiplication table of a number, entered by the user
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
       cout << (n * i) << " ";
    }

    cout << endl;
    return 0;

}


//WAP to input a number and check whether the number is an Armstrong number or not.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number : ";
    cin >> n;
    int num = n;
    int cubeSum = 0;

    while(num > 0) {
        int lastDig = num % 10;
        cubeSum += lastDig * lastDig * lastDig;
        num /= 10;
    }

    if(n == cubeSum) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "NOT an Armstrong number" << endl;
    }




    return 0;

}




//For a positive N, WAP that prints all the prime numbers from 2 to N
#include <iostream>
using namespace std;

int main() {
    int N = 15;
    for(int i = 2; i <= N; i++) {
        int curr = i; //current number to check for
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++) {
            if(curr % j == 0) {

                isPrime = false;
            }
        }
        if(isPrime) {
            cout << curr << " ";
        }
    }
    cout << endl;

    return 0;
}


//For a positive N, WAP that prints the first N Fibonacci numbers
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";

    for(int i = 2; i < n; i++) {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << endl;
    return 0;
}

