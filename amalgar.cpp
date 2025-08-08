#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a , b;
    cin >> a >> b ;
cout <<"sum"<< a+b<< endl;
cout << "difference"<< a-b<< endl;
cout<< "product"<< a*b<< endl;
cout<<"quntient"<<fixed<< setprecision(3)<< a/b<< endl;
cout<<"remainder"<< a%b<< endl;
return 0;
}
