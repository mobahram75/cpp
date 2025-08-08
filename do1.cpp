#include <iostream>
using namespace std;
int main(){
    int n;
    do{
    cout<<"enter n:";
    cin>>n;
    if( n>=1 && n<=5){
    cout<<n<<" is correct"<<endl;
    }
}while( n<1 || n>5);
return 0;
}