//  Example one : Print numbers from 1 to 5 using while loop.
#include <iostream>
using namespace std;

int main() {
    int count = 0;

    while(count <= 5){
        cout << count << " ";
        count++;
    }
    return 0;
}

// Example two : Print Table of 2 using while loop and ternary operator.
#include <iostream>
using namespace std;

int main() {
    int count = 1;

    while(count <= 20){
        cout << (count%2 == 0 ? count : 0) << " ";
        count++;
    }
    return 0;
}

// Example 3 : Print odd numbers from 1 to 15 using while loop
#include <iostream>
using namespace std;

int main() {
    int num = 1;

    while (num <= 15) {
        if (num % 2 != 0) {
            cout << num << " ";
        }
        num++;
    }
    return 0;
}


// Example 4 : Print reverse numbers from 10 to 1
#include <iostream>
using namespace std;

int main() {
    int i = 10;

    while (i >= 1) {
        cout << i << " ";
        i--;
    }
    return 0;
}

// Example 5 : Print squares of numbers from 1 to 10
#include <iostream>
using namespace std;

int main() {
    int n = 1;

    while (n <= 10) {
        cout << (n * n) << " ";
        n++;
    }
    return 0;
}


// Example 6 : Print only multiples of 3 from 1 to 30 (using ternary operator)
#include <iostream>
using namespace std;

int main() {
    int x = 1;

    while (x <= 30) {
        cout << (x % 3 == 0 ? x : 0) << " ";
        x++;
    }
    return 0;
}

// Example 7 : Print sum of numbers from 1 to 5 while looping
#include <iostream>
using namespace std;

int main() {
    int num = 1;
    int sum = 0;

    while (num <= 5) {
        sum += num;
        num++;
    }

    cout << "Sum is: " << sum;
    return 0;
}


// Example 8 : Print factorial of a number (say 5) using while loop
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int fact = 1;

    while (n > 0) {
        fact *= n;
        n--;
    }

    cout << "Factorial is: " << fact;
    return 0;
}

// Example 9 : Print countdown with message
#include <iostream>
using namespace std;

int main() {
    int c = 5;

    while (c > 0) {
        cout << "Countdown: " << c << endl;
        c--;
    }
    cout << "Blastoff!";
    return 0;
}


// Example 10 : Print alternate 1 and 0 five times (using ternary)
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << (i % 2 == 0 ? 0 : 1) << " ";
        i++;
    }
    return 0;
}
