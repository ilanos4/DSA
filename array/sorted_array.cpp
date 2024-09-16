#include<iostream>
using namespace std;

int is_sorted(int arr[], int n){
    for(int i =0; i<n; i++){
        if(arr[i-1] > arr[i])
        return false;
    }
    return true;
}

int main()
{
	int arr[] = { 28, 23, 23, 45, 78, 88 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (is_sorted(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}