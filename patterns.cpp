/*
* * * *
* * * *
* * * *
* * * *
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1; i<=n; i++){ //outer loop for rows
//         for(int j=1; j<=n; j++){ //inner loop for columns
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
A B C D
A B C D
A B C D
A B C D
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 0; i<n; i++){ //outer loop for rows
//         char ch = 'A';
//         for(int j = 0; j<n; j++){ //inner loop for columns
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*
 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int num = 1;
//     for(int i = 0; i<n; i++){ //outer loop for rows
//         for(int j=0; j<n; j++){ //inner loop for columns
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*
A B C D
E F G H
I J K L
M N O P
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0; i<n; i++){ //outer loop for rows
//         for(int j=0; j<n; j++){ //inner loop for columns
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
*
* *
* * *
* * * * 
*/

/*
1
2 2
3 3 3
4 4 4 4
*/

/*
A
B B
C C C
D D D D
*/
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     char ch = 'A';
//     for(int i = 0; i<n; i++){ //outer loop for rows
//         for(int j=0; j<i+1; j++){ //inner loop for columns
//             cout << ch << " ";
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
//     return 0;
// }


/*
1
1 2
1 2 3
1 2 3 4
*/

/*
Floyds Triangle
1
2 3
4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    for(int i = 0; i<n; i++){ //outer loop for rows
        for(int j=0; j<i+1; j++){ //inner loop for columns
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}