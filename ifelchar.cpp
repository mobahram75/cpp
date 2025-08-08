#include <iostream>
using namespace std;
char getfirstmachingchar( bool a, bool b, bool c){
    if (a)
        return 'a';
    else if (b)
        return 'b';
    else if (c)
        return 'c';
    return 0;
}
int main(){
    char result =
    getfirstmachingchar( false , true , true );
    cout<< result<< endl;
    return 0;
}