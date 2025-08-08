#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a , b , c , d;
    cin >> a >> b>> c>> d;
    double sum = a + b + c + d;
    double avg = sum/4;
    cout << fixed << setprecision(3);
    cout<< "sum=" << setw(6)<< sum <<endl;
    cout<< "avg=" << setw(6)<< avg <<endl;
    return 0;
}