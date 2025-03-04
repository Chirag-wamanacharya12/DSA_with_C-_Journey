#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: ";
    cin >> ch;
    if(ch >= 65 && ch <= 90){
        cout<<"You entered an uppercase character."<<endl;
    }else{
        cout<<"You entered a lowercase character."<<endl;
    }
    return 0;
}