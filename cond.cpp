#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if( n%2 != 0 && n<10 ) {
        cout<<"weird!" << endl;
    } 
    else if (n>=2 && n<=5) {
        cout <<"not wierd!" << endl;   
        } 
    else if ( n>=6 && n<=20){
        cout<<"weird!"<< endl;
    }
    else {
        cout <<"not weird!" << endl;
    }
    return 0;
}