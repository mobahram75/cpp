#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    if (n<0){
        cout<<"negative"<< endl;
    }
    else if (n==0){
        cout<<"zero"<< endl;
    }
    else if (n>0 && n<10){
        cout<<" small positive"<< endl;
    }
    else { cout<<"positive"<< endl;
    }
    return 0;
}