#include <bits/stdc++.h>
using namespace std;

void printFreq(vector<int>& arr, int N)
{
    int freq = 1;
    for (int i = 1; i < N; i++) {

        if (arr[i] == arr[i - 1]) {
            freq++;
        }

        else {
            cout << "Frequency of " << arr[i - 1]
                 << " is: " << freq << endl;
            // Update freq
            freq = 1;
        }
    }

    // Print the frequency of the last element
    cout << "Frequency of " << arr[N - 1] << " is: " << freq
         << endl;
}

// Driver Code
int main()
{

    // Given Input
    vector<int> arr
        = { 1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10 };
    int N = arr.size();

    // Function Call
    printFreq(arr, N);
    return 0;
}
