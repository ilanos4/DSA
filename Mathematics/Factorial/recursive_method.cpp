#include<iostream>
using namespace std;

unsigned Factorial(unsigned n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * Factorial(n-1);
}

int main(){
    int num = 6;
    cout<< "Factorial of "<< num << " is "<< Factorial(num)<<endl;
    return 0;
}