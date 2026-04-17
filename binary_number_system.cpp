//Convert Binary to Decimal

#include <iostream>
using namespace std;

void binToDec(int binNum) {
    int n = binNum;
    int DecNum = 0;
    int pow = 1; //2^0 2^1 2^2....

    while(n > 0) {
        int lastDig = n % 10;
        DecNum += lastDig * pow;
        pow = pow * 2;
        n = n / 10;
    }
    cout << DecNum << endl;
}

int main() {
    binToDec(101);
    return 0;

}



//Convert Decimal to  Binary 

#include <iostream>
using namespace std;

void decToBin(int decNum) {
    int n = decNum;
    int pow = 1; //10^0 10^1 10^2....
    int binNum = 0;

    while(n > 0) {
       int rem = n % 2;
       binNum += rem * pow;
       n = n / 2;
       pow = pow * 10;
    }
    cout << "binary of " << decNum << " = " << binNum << endl;
}

int main() {
    decToBin(4);
    return 0;

}



