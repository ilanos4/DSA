#include<iostream>
using namespace std;

unsigned int Factorial ( unsigned int n){
    int res = 1, i;
    for(int i =2; i<=n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int num = 6;
    cout<<"Factorial of "<< num << " is "<< Factorial(num);
    return 0;
}