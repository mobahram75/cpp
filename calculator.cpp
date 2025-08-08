#include <iostream>
#include <vector>
#include <string>
using namespace std;
char op;
vector<int> numbers;
int count;
void work();
int calculate();
int ans();
int main(){
    cout<<"how many numbers do you want to enter?";
    cin>>count;
    
    for (int i =0; i<count; i++){
        int temp;
        cout<<"enter number"<< i + 1 << ":";
        cin>> temp;
        numbers.push_back(temp);
    }
    work();
    ans();
    return 0;
}
void work(){
    cout<<"enter operator:";
    cin>>op;
    string validoperators= "+-*%/";
    if (validoperators.find(op) != string:: npos){
        cout<<"operator is valid"<< endl;
    }
        else{
            cout<<"operator is not valid"<< endl;
        }
}
int calculate(){
    if (op == '+'){
        int result =0;
        for (int i = 0; i<numbers.size(); i++)
        result += numbers[i];
        return result;}
    else if (op == '*'){ int result =1;
        for (int i = 0; i<numbers.size(); i++)
        result *= numbers[i];
        return result;
    }
    else if(op == '-'){
        int result = numbers[0];
        for (int i = 1; i <numbers.size(); i++)
        result -= numbers[i];
        return result;
    }
    else if(op =='/'){
        int result = numbers[0];
        for ( int i= 1; i< numbers.size(); i++){
            if ( numbers[i]==0){
            cout<<"error: division by zero!"<< endl;
            return 0;
        }
        result /= numbers[i];
        }
    return result;
    }
    else if (op== '%'){
        int result = numbers[0];
        for (int i=1; i<numbers.size(); i++){
            if (numbers[i]==0){
                cout<<"error: division by zero!"<<endl;
                return 0;
            }
            result %= numbers[i];
        }
        return result;
    }
    cout<<"erros: invalid operator in calculate!"<< endl;
    return 0;
}
int ans(){
    int answer = calculate();
    cout<<"answer is:"<< answer<< endl;
    return 0;
}