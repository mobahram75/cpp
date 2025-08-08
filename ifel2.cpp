#include <iostream>
using namespace std;
void ifelse( bool a, bool b, bool c){
    if(a){
        cout<<"a";
    }
    else if (b){
        cout<<"b";
    }
    else if (c){
        cout<<"c";
    }
    cout<<'\n';
}
void ifif(bool a, bool b, bool c)
{
    if(a)
    cout <<"a";
    if(b)
    cout<<"b";
    if(c);
    cout<<"c";
    cout<<'\n';
}
int main(){
    ifelse(false,true,true);
    ifif(false,true,true);
    return 0;
}