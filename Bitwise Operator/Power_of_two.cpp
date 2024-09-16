#include<iostream>
using namespace std;

bool isPowerOfTwo(long long  n){
    return (n != 0) && ((n & (n-1)) == 0);
}
int main(){
    isPowerOfTwo(45) ? cout << "Yes\n" : cout << "No\n";
    isPowerOfTwo(128) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}