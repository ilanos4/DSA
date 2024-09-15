#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(int n){
    int reverse = 0;
    int temp = n;
    while(temp!= 0){
        reverse = (reverse * 10) + (temp%10);
        temp = temp/10;
    }
    return(reverse == n);
}

int main(){
    int n = 2442;
    if(is_palindrome(n)){
        cout<< "Yes"<< endl;
    }
    else {
        cout<<"no"<<endl;
    }
    return 0;
        
}