#include <iostream>
using namespace std;
int main(){
    int n, sum =0, val;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> val;
        sum += val;
    }
    cout<< sum<< endl;
    return 0;
}