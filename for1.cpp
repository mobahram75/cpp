#include <iostream>
using namespace std;
void numbers(){
    int n;
    cout<<"enter a number";
    cin>>n;
    for( int i=1 ; i<n ; i++){
    if (i %2 == 1){
        cout<<i<<"is odd"<<endl;
    }
    }
}
int main(){
    numbers();
    return 0;
}