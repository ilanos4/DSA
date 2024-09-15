#include<iostream>
using namespace std;

int countDigit(long long n){
    if(n == 0){
        return 1;
    }
    int count = 0;
    while(n!=0){
        n = n/10;
        ++count;
    }
    return count;
}

int main(void){
    long long n = 324265356236;
    cout<< "Number of Digit:"<< countDigit(n);
    return 0;
}