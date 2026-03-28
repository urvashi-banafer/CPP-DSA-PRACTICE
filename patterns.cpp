#include <iostream>
using namespace std;

int main() {
    //outer loop
    for(int i = 1; i <= 4; i++ ) {
        //inner loop
        for(int j = 1; j <= 4; j++) {
            //work
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n = 5;
    //outer loop
    for(int i = 1; i <= n; i++ ) {
        //inner loop
        for(int j = 1; j <= n; j++) {
            //work
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 4; i++ ) {
        int val = i;
        for(int j = 1; j <= 4; j++) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int i;
    for(i = 1; i <= 4; i++ ) {
        int val = i;
        for(int j = 1; j <= 4; j++) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << i << endl;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++ ) {
        for(int j = 1; j <= i; j++) {
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n : ";
    cin >> n;
    for(int i = 1; i <= n; i++ ) {
        for(int j = 1; j <= i; j++) {
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}




//Print inverted star pattern
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n - i + 1); j++) {

            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}



//Print half pyramid pattern
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {

            cout << j;
        }
        cout << endl;
    }

    return 0;
}



//Print a hollow rectangle pattern
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        cout <<"*";  //First
        for(int j = 1; j <= n-1; j++) {
            if(i == 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
            
        }
        cout << "*" << endl; //last
    }
    return 0;
}




//Inverted and rotated half pyramid
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {
        //spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        //stars
        for(int j = 1; j <= i; j++) {
            cout <<"*";
        }
        cout << endl;
    }

    return 0; 
}



//Print Floyd's Triangle 
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int num = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0; 
}




//Diamond pattern 
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    //1st pyramid
    for(int i = 1; i <= n; i++) {
        //spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        //stars 
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    //2nd pyramid 
    for(int i = n; i >= 1; i--) {
        //spaces
        for(int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        //stars
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;            
    }

    return 0; 
}



//Butterfly pattern 
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    //upper half
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
       for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }


     //lower half
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }
       for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0; 
}






//Print the 0-1 Triangle pattern
#include <iostream>
using namespace std;

int main() {
    bool val = true;
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }

    return 0;
}


//Print Rhombus pattern
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 0; i <n; i++) {
        //spaces
        for(int j = 0; j <= n-i-1; j++) {
            cout << " ";
        }

        //stars 
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}



//Print the Palindromic pattern with numbers 
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i =1; i <= n; i++) {
        //spaces
        for(int j = 1; j<= n-i; j++) {
            cout << " ";
        }


        //nums backward
        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        //nums forward
        for(int j = 2; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}