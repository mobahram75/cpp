#include <iostream>
using namespace std;
int main(){
int num;
do{
cout<<" enter a number between 1 and 5:";
cin>>num;
if(num<1 || num >5){ cout<<" invalid number try egain"<<endl;
}
} while(num>=1 || num<=5);
cout<<"valid number entered;"<< num <<endl;
return 0;
}